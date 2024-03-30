#include<iostream>

class A {

private :
	int a, b;
public:
	void setData(int a, int b) {
		this->a = a;
		this->b = b;

	}
	void show() {
		std::cout << a << " " << b<<std::endl;
	}
	A() {
		std::cout << "Dedalut " << std::endl;
	}
	A(A& obj) {
		a = obj.a;
		b = obj.b;
		std::cout << "Copy " << std::endl;
	}
};

/*int main() {

	A obj1;
	obj1.setData(5,3);
	A obj2 = obj1; //copy

	A obj3;
	obj3 = obj1; // assignment


	return 0;
}*/