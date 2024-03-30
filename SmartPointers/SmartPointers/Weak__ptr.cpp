#include<iostream>
#include<memory>
struct Mother;
struct Son;
struct Daughter;
struct Mother {
	Mother() {
		std::cout << "constructor mother" << std::endl;
	}
	~Mother() {
		std::cout << "Mother gone" << std::endl;
	}
	void setSon(const std::shared_ptr <Son> s) {
		mySon = s;
	}
	void setDaughter(const std::shared_ptr <Daughter> d) {
		myDaughter = d;
	}
	std::weak_ptr<Son> mySon;
	std::weak_ptr<Daughter> myDaughter;
};
struct Son {
	Son(std::shared_ptr<Mother> m) :myMother(m) { std::cout << "constructor son" << std::endl; }
	~Son() {
		std::cout << "Son gone" << std::endl;
	}
	std::shared_ptr<const Mother> myMother;
};
struct Daughter {
	Daughter(std::shared_ptr<Mother> m):myMother(m){ std::cout << "constructor daughter" << std::endl; }
	~Daughter() {
		std::cout << "Daughter gone"<<std::endl;
	}
	std::shared_ptr<const Mother> myMother;
};
//int main() {
//		std::shared_ptr<Mother> mother= std::shared_ptr<Mother>(new Mother);
//		std::shared_ptr<Son> son = std::shared_ptr<Son>(new Son(mother));
//		std::shared_ptr<Daughter> daughter = std::shared_ptr<Daughter>(new Daughter(mother));
//		mother->setSon(son);
//		mother->setDaughter(daughter);
//}