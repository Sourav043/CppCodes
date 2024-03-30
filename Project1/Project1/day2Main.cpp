#include<iostream>

int sum(int a, int b);
void log(const char* string);

int main() {
	log("Sooo");

	int a = 5, b = 10;

	std::cout << sum(a, b) << std::endl;

	const char* str = "Sourav";

	for (int i = 0; i < 6; i++) {
		std::cout << str[i] << std::endl;
	}

	return 0;
}