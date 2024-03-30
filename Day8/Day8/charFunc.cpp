#include<iostream>
#include <cstring>

const char* display() {

	const char* ptr = "Hello";
	return ptr;
}

int main() {
	
	const char* p = display();
	std::cout << p;
	return 0;
}