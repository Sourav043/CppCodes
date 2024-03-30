#include<iostream>

template <typename T> 

class uniqueptr {
private :
	T* res;
public :

	uniqueptr(T* a = nullptr) : res(a) {
		std::cout << "Ctor "<<this<<std::endl;
	}
	
	//copy const
	uniqueptr(const uniqueptr<T>& ptr) = delete;

	//copy assingment
	uniqueptr& operator=(const uniqueptr<T>& ptr) = delete;

	//Move Copy
	uniqueptr(uniqueptr<T>&& ptr) noexcept{
		res = ptr.res;
		ptr.res = nullptr;
	}

	//Move Assingment

	uniqueptr& operator=(uniqueptr<T>&& ptr) noexcept{
		if (this != &ptr) {  // ptr4 = ptr4
			if (res) {		// deallocating previous memory
				delete res;
			}
			res = ptr.res;			// transfering ownership 
			ptr.res = nullptr;		// free memory by whom I assign
		}
		return *this;
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
	void reset(T* newRes = nullptr) {
		if (res) { // res already there
			delete res;
		}
		res = newRes;
	}

	~uniqueptr() {
		std::cout << "\ndTor" << this;
		if (res) {
			delete res;
			res = nullptr;
		}
	}
};

//int main() {
//
//	uniqueptr<int> ptr1(new int(2));
//	//uniqueptr<int> ptr2(ptr1); //copy Const
//	//uniqueptr<int> ptr3 = ptr1; // copy Assign
//	uniqueptr<int> ptr4(new int(100));
//	//ptr4 = ptr3; 
//	uniqueptr<int> ptr3 = std::move(ptr1); // move copy assignment
//	ptr4 = std::move(ptr3);
//	//std::cout << &ptr1 << std::endl;
//	//std::cout << &ptr3 << std::endl;
//	//std::cout << &ptr4 << std::endl;
//	//ptr1->func();
//	std::cout << *ptr4;
//	//ptr1.get();
//	//ptr1.reset(new int(30));
//
//	return 0;
//}