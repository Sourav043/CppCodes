/*
#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
using namespace std;
using namespace std::chrono;
typedef long long int  ull;

ull EvenSum = 0, OddSum = 0;

void findEven(ull start, ull end) {
	for (ull i = start; i <= end; ++i) {
		if (!(i & 1)) {
			(EvenSum) += i;
		}
	}

}

void findOdd(ull start, ull end) {
	for (ull i = start; i <= end; ++i) {
		if (i & 1) {
			(OddSum) += i;
		}
	}
	std::this_thread::sleep_for(chrono::seconds(5));
}

int main() {

	ull start = 0, end = 19000000;


	auto startTime = high_resolution_clock::now();

	// // WITH THREAD
	std::thread t1(findEven, start, end);
	std::thread t2(findOdd, start, end);

	t1.join();
	t2.join();

	// // WITHOUT THREAD
	 //findEven(start,end);
	//findOdd(start, end);
	
	auto stopTime = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stopTime - startTime);

	cout << "OddSum : " << OddSum << endl;
	cout << "EvenSum : " << EvenSum << endl;

	cout << "Sec: " << duration.count() << endl;

	return 0;
}*/