#include<iostream>
extern int a;
extern int val;

// extern auto val; // auto and extern they are not use together

void func(int* x, int* y) {
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}
int main() {
	std::cout << a <<std::endl;
	std::cout << val;

	int x = 5;
	int y = 6;

	func(&x, &y);
	
	std::cout << x << " " << y;
}

