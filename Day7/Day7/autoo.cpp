#include<iostream>

/**int main() {

	auto obj{ 20 };

	//auto ptr{ &obj };

	//std::cout << *ptr;

	const int* ptr{ &obj };
	int* const ptr1{ &obj };

	const auto tr{ &obj };
	auto const tr1{ &obj };

	std::cout <<"ptr -> " << *ptr << std::endl;
	std::cout << "ptr1 -> " << *ptr1 << std::endl;

	std::cout << "after change tr -> " << *tr << std::endl;
	std::cout << "after change tr1 -> " << *tr1 << std::endl;

	

	int d = 5;
	//ptr1 = &d;
	*ptr1 = d;

	int s = 44;
	//*ptr = s;
	ptr = &s;

	std::cout << "after change ptr -> " << *ptr << std::endl;
	std::cout << "after change ptr1 -> " << *ptr1 << std::endl;
	return 0;
}*/