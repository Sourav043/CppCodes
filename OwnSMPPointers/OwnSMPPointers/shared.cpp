#include <iostream>
#include<memory>
class rec {
private:

	int len, bre;
public:


	// default parameterize constructor
	rec(int l = 1, int b = 1) :len(l), bre(b) {
		/*len = l;
		bre = b;*/
	}

	int area() {
		return len * bre;
	}
};

int main() {


	std::shared_ptr<rec> p1(new rec(9,4));

	std::shared_ptr<rec> p2;

	p2 = p1;

	std::cout << p1.use_count() <<" "<<p2.use_count();
	return 0;
}