#include<iostream>


void display(int arr[][3][3]) {


	for (auto i{ 0 }; i < 3; i++) {
		for (auto j{ 0 }; j < 3; j++) {
			for (auto k{ 0 }; k < 3; k++) {

				std::cout << arr[i][j][k]*3 << " ";

			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
		

}
int main() {

	int arr[3][3][3]{};

	auto val{1};
	for (auto i{ 0 }; i < 3; i++) {
		for (auto j{ 0 }; j < 3; j++) {
			for (auto k{ 0 }; k < 3; k++) {
				arr[i][j][k] = val++;
			}
		}
	}

	display(arr);

	return 0;
}