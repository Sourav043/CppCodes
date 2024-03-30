#include <iostream>
struct A {
	int a;
	int b;
};

struct F { int i; };            // C-struct (POD)
class B : public A {};          // still POD (no data members added)
struct C : B { void fn() {} };   // still POD (member function)
struct D : C { D() {} };         // no POD (custom default constructor)
int main() {
	if (std::is_pod<A>::value) {
		std::cout << "Is POD"<<std::endl;
	}
	else {
		std::cout << "Not POD"<<std::endl;
	}

	std::cout << "is_pod:" << std::endl;
	std::cout << "int: " << std::is_pod<int>::value << std::endl;
	std::cout << "F: " << std::is_pod<F>::value << std::endl;
	std::cout << "B: " << std::is_pod<B>::value << std::endl;
	std::cout << "C: " << std::is_pod<C>::value << std::endl;
	std::cout << "D: " << std::is_pod<D>::value << std::endl;
}