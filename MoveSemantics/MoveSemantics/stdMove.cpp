#include<iostream>



int main() {

	std::string s1 = "kk ll\n";
	std::string s2 = "oo pp\n";

	std::cout << " S1 : "<< s1;
	std::cout << " S2 : " << s2;

	//s2 = std::move(s1);

	s2 = static_cast<std::string&&>(s1);

	std::cout << " S1 : " << s1;
	std::cout << " S2 : " << s2;

	return 0;
}