#include<iostream>
class Base {
public :
	Base() {
		std::cout << "Base Constructor\n";
	}
	virtual ~Base() {
		std::cout << "Base Destructor\n";
	}
	virtual void fun() = 0;
};
void Base::fun() {
	std::cout << "Ab Base\n";
}
class Derived : public Base {
public :
	Derived() {
		std::cout << "Derived Constructor\n";
	}
	void fun() {
		std::cout << "Abstract\n";
	}
	~Derived() {
		std::cout << "Derived Destructor\n";
	}
};

int main() {
	Base* b = new Derived();
	b->fun();
	delete b;
	Base* v = new Derived();
	v->Base::fun();
	return 0;
}