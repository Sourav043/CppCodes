#include <iostream>
void func(int* p) {
	bool b = p; // narrows to true or false
	bool b2{ p != nullptr }; // explicit test against nullptr
	if (p) { // equivalent to p!=nullptr
		std::cout << "Inside if";
	}
}

int global = 45;
int i = NULL;
/*int main() {
	int a = 10;
	func(&a);

	unsigned int u = 5;
	std::cout << u;


	int global = 15;
	std::cout << global << " " << ::global;
}*/