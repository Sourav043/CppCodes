#include<iostream>

class A {

private:
	int a, b ,*p;
public:
	void setData(int a, int b, int z) {
		this->a = a;
		this->b = b;
		*p = z;

	}
	void show() {
		std::cout << a << " " << b <<" " << *p<< std::endl;
	}
	A() {
		p = new int;
		std::cout << "Defalut " <<p<< std::endl;
	}
	A(A& obj) {
		a = obj.a;
		b = obj.b;
		p = new int;
		*p = *(obj.p);
		std::cout << "Copy " <<p<< std::endl;
	}
	~A(){
		std::cout << "DesTruct " << std::endl;
	}
};

/*int main() {

	A obj1;
	obj1.setData(1, 2, 3);
	obj1.show();
	A obj2 = obj1; //copy
	obj2.setData(6, 9, 8);
	obj2.show();
	A obj3;
	obj3 = obj1; // assignment
	//obj3.setData(11, 22, 33);
	//obj3.show();


	return 0;
}*/