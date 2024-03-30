#include <iostream>
#include<thread>
#include<mutex>

std::mutex m1;

void fun(int x) {
	while(x-->0)
		std::cout << x <<"\n";
}

class B {
public:
	void operator()(int x) {
		std::cout << "ThreadOperator\n";
	}
	void plus() {
		std::cout << "Bb Ki";
	}
};

int num = 0;
void increment() {
	m1.lock();
	for (int i = 0; i < 10000; i++) {
		num++;
	}
	m1.unlock();
	std::cout << num << std::endl;
}

//int main() {
//	
//	/*std::thread t1(fun,10);
//	t1.join();
//
//	std::thread t2([](int v){
//		do {
//			std::cout << "H\n";
//		} while (v-- > 0);
//		},2);
//	t2.join();
//
//	std::thread t3(B(), 5);
//	t3.join();
//
//	B b1;
//	std::thread t4(&B::plus, &b1);
//	t4.join();*/
//
//	std::thread t5(increment);
//	
//
//	std::thread t6(increment);
//
//	t5.join();
//	t6.join();
//	
//	return 0;
//}