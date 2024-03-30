#include <iostream>
int* find(int* first, int* last, int v) // find x in [first:last)
{
	while (first != last && *first != v) ++first;
	return first;
}
void func(int* p, int* q) {
	int* pp = find(p, q, 4);
	std::cout << *pp << std::endl;
}
int main() {
	int arr[]{ 1, 2, 3, 4 };
	int* p1 = arr;
	int* p2 = arr + 3;
	func(p1, p2);
	std::cout << *p1 << std::endl;
}