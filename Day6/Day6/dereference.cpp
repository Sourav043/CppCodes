#include<iostream>
#define LOG(x) std::cout<<x<<std::endl

void fun(int* p) {
	(*p)++;
}
/*int main() {

	int n = 10;

	int* p = &n;

	int& y = n;

	//LOG(&y);
	//LOG(&n);
//	LOG(p);

	fun(&y);
	LOG(y);
	return 0;



}*/