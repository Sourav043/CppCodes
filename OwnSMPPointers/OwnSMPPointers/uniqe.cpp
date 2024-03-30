#include <iostream>
#include<memory>
class rec {
private:

	int len, bre;
public:


	// default parameterize constructor
	rec(int l=1, int b=1) :len(l), bre(b) {
		/*len = l;
		bre = b;*/
	}

	int area() {
		return len * bre;
	}
};

//int main() {
//
//	std::unique_ptr<rec> p1(new rec(5,3));
//
//	std::cout << p1->area();
//
//	std::unique_ptr<rec> p2;
//	p2 = std::move(p1);
//	p2.reset();
//	if(p2)
//		std::cout << p2->area();
//	
//	return 0;
//}