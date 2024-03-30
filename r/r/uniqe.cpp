#include <iostream>

class Test {
public:
	Test();
	Test(int);
	Test(Test&);
	~Test();
};
Test::Test() {
	std::cout << "Default Constructor\n";
}
Test::Test(int i) {
	std::cout << "Parameterized Constructor\n";
}
Test::Test(Test& t) {
	std::cout << "Copy Constructor\n";
}
Test::~Test() {
	std::cout << "Destructor\n";
}
Test fun(Test& t) {
	std::cout << "fun function\n";
	return t;
}

int main() {
	Test t1;
	fun(t1); //temporary object(temp), Test temp(t)
	Test t2;
}
