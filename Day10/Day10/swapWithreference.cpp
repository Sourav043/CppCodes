#include<iostream>


void swap(int& a, int& b) {


	a = a + b;
	b = a-b;
	a = a - b;
}

/*int main() {

	int a = 10, b = 20;

	swap(a, b);

	std::cout << "After Swapping" << std::endl;
	std::cout << "a -> " << a << std::endl;
	std::cout << "b -> " << b << std::endl;

	return 0;
}*/