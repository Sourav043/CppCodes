#include<iostream>

template<typename T>

class sharedptr {

private:
	T* res;
	int* counter;

	void increment() {
		if (counter) {
			(*counter)++;
		}
	}

	void decrement() {
		if (counter) {
			(*counter)--;
			if ((*counter) == 0) {
				if (res) { 
					delete counter;
					delete res;
				}
			}
		}
	}

public:

	sharedptr(T* ptr) : res(ptr), counter(new int(1)) {
		std::cout << "Constructor\n";
	}

	sharedptr<T>(const sharedptr<T>& ptr) {
		res = ptr.res;
		counter = ptr.counter;
		increment();
	}
};
