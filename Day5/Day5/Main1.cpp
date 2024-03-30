#include<iostream>
#include "Log.h"
int multiply(int a, int b)
{
	Log("Multiply");// If you don’t call Linker never links
	return a * b;
}
/*int main()
{
	InitLog();
	std::cout << multiply(10, 20) << std::endl;
	std::cin.get();
}*/