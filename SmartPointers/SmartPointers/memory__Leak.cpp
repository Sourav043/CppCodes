#include<iostream>

void func() {
	for (int i = 0; i < 10000; i++) {
		std::cout << "HI\n";
		int* a = new int(100);
		delete a;
	}
	int* s = new int[50];
	s = nullptr;
}

//int main() {
	//func();}