#include<iostream>
#include<thread>



class Base {

public :
	Base() = default;
	int x=1;
	virtual void print() {
		std::cout << "Base";
	}
};

class Derived : public Base
{
public :
	Derived() = default;
	int y=2;
	void print() {
		std::cout << "Derived\n";
	}
};

void getClass(Base &obj) {
	obj.print();
}
//int main() {
//	
//	Derived o1{};
//	getClass(o1);
//}