#include <iostream>
int main() {
	// int var = 1;
	// int& r{var}; // r and var now refer to the same int
	// int x = r; // x becomes 1
	// std::cout << " x : " << x << std::endl;
	// std::cout << " var: " << var << std::endl;
	// r = 2; // var becomes 2
	// std::cout << " var: " << var << std::endl;



	int var = 0;
	std::cout << "var :" << var << std::endl;
	int& rr{ var };
	++rr; // var is incremented to 1
	std::cout << "var :" << var << std::endl;
	int* pp = &rr; // pp points to var
	std::cout << "var :" << *pp << std::endl;


	const double& dr = 1; // error : lvalue needed temporary
	const double& cdr{ 1 }; // OK
	std::cout << cdr;


}