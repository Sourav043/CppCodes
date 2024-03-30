#include <iostream>
void func() {
	int v1[8]{2,3,6,5,4,8,9,6};
	int v2[8]{11,22,55,33,66,55,88,77};
	int i1 = &v1[5] - &v1[3]; // i1 = 2
	int i2 = &v1[5] - &v2[3]; // result undefined
	int* p1 = v2 + 2; // p1 = &v2[2]
	//int* p2 = +-2; // *p2 undefined
	std::cout << i1 << std::endl;
	std::cout << *p1 << std::endl;
}
/*int main() { func(); }*/