#include<iostream>

template<typename T>

class sharedptr {
private:
	T* res;
	int* counter;
	void increment() {
		if (counter) {
			*(counter)++;
		}
	}
	void decrement() {
		if (counter) {
			*(counter)--;
			if (*(counter) == 0) {
				if (res) {
					delete res;
					delete counter;
					res = nullptr;
					counter = nullptr;
				}
			}
		}
	}
public :
	sharedptr(T* ptr = nullptr) : res(ptr), counter(new int(1)) {
		std::cout << "constTor\n";
	}
	sharedptr<T>(const sharedptr<T>& ptr) {

		res = ptr.res;
		counter = ptr.counter;
		increment();
	}

	sharedptr<T>& operator=(const sharedptr<T>& ptr) {
		if (this != &ptr) {
			decrement();
			res = ptr.res;
			counter = ptr.counter;
			increment();
		}
		return *this;
	}

	sharedptr<T>(sharedptr<T>&& ptr) noexcept {

		res = ptr.res;
		counter = ptr.counter;
		ptr.res = nullptr;
		ptr.counter = nullptr;
	}

	sharedptr<T>& operator=(sharedptr<T>&& ptr) noexcept{
		if (this != &ptr) {
			decrement();
			res = ptr.res;
			counter = ptr.counter;
			ptr.res = nullptr;
			ptr.counter = nullptr;
		}
		return *this;
	}

	void reset(T* ptr = nullptr) {
		decrement();
		res = ptr;
		counter = new int(1);
	}

	int get_count() {
		if (counter) {
			return (*counter);
		}
		return -1;
	}

	T* operator->() {
		return res;
	}

	T& operator*() {
		return *res;
	}

	T* get() {
		return res;
	}

	~sharedptr() {
		std::cout << "desTor\n";
		decrement();
	}
};

/*int main() {

	sharedptr<int> ptr1;
	sharedptr<int> ptr2(new int(10));
	sharedptr<int> ptr3(ptr2); // copy cons
	//ptr3 = ptr2; // copy assignment

	sharedptr<int> ptr4(std::move(ptr1)); // move copy cons
	//prt2 = std::move(ptr3); // move assignment

	//ptr1.reset();
	ptr1.reset(new int(4));

	std::cout << *ptr1;  // * operator 
	//ptr1->func(); // -> operator

	ptr1.get();  // raw pointer
	ptr1.get_count(); // no of objects pointing to the the same resource

	return 0;
}*/