#include<iostream>

class a {
	public :

		a() {
			std::cout << "Constructor\n";
		}
		a(const a& p) {
			std::cout << "Copy Constructor\n";
		}
		a& operator=(const a& p) {
			std::cout << "Copy Assign\n";
			return *this;
		}
		a(a&& p) noexcept{
			std::cout << "Move Const\n";
		}
		a& operator=(a&& p) noexcept {
			std::cout << "Move Assign\n";
			return *this;
		}
		~a() {
			std::cout << "Destructor\n";
		}
};

int main() {
	a o1;
	a o2 = o1;
	a o3 = std::move(o2);
	o1 = o3;
	o3 = std::move(o1);
}