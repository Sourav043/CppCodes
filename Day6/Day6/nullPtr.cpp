#include<iostream>
void foo(int i)
{
	std::cout << "foo int"<<std::endl;
}
void foo(char* ptr)
{
	std::cout << "foo ptr";
}
/*int main()
{
	foo(nullptr);
	std::cout << "Btwn"<<std::endl;
	foo(NULL);
}*/