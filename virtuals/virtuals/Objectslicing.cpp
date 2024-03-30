#include<iostream>

class Base {
protected:
	int i;
public:
	Base(int a) {
		i = a;
	}
	virtual void display() {
		std::cout << "I am Base i "<<i<<std::endl;
	}
};


int main() {

}