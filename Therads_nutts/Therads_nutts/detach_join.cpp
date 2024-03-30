#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace std::chrono;

void findOdd() {
	for (int i = 0; i < 100; i++) {

	}
	std::this_thread::sleep_for(chrono::seconds(5));
	std::cout << "Mfrfrf\n";
}
/*
int main() {
	std::cout << "Mai\n";


	std::thread t2(findOdd);



	std::cout << "vv\n";
	t2.detach();
	if (t2.joinable()) {
		t2.join();
	}
	return 0;
}*/