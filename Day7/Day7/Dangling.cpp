#include<iostream>


int* getVal() {
	int a = 50;
	return &a;
}
int main() {

	int* p = getVal();
	std::cout << *p<<std::endl;
	std::cout << p<<std::endl;

	//int a = 5;
	//std::cout << &a;

	return 0;
}