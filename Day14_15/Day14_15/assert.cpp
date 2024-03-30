#include <iostream>
#include <cassert>
constexpr int multiplyby10(int x) { return x * 10; }

int main() {
	// Evaluation at compile time
	constexpr int result = multiplyby10(20);
	static_assert(result == 200, "I am fine");
	// Evaluation at run time
	int n = 30;
	int result1 = multiplyby10(n);
	assert(result1 == 300);

	// const int cn = 5;
	// std::array<int, cn> a2{1, 2, 3};
}