#include <iostream>

template <typename T>
class unique_ptr {
	T* ptr;

public:
	unique_ptr(T* a = nullptr) : ptr(a) {
		std::cout << "CTor\n";
	}

	unique_ptr(const unique_ptr<T>& p) = delete;
	unique_ptr& operator=(const unique_ptr<T>& p) = delete;

	unique_ptr(unique_ptr<T>&& p) {
		ptr = p.ptr;
		p.ptr = nullptr;
	}

	unique_ptr& operator=(unique_ptr<T>&& p) {
		if(&p!=this)
		{
			if (ptr) {
			//ptr = nullptr;
			delete ptr;
		}
		ptr = p.ptr;
		p.ptr = nullptr;
	}
		return *this;
	}


};

