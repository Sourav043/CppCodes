#include <iostream>
#include <vector>
void Testfunc() {
    char c;
    while (std::cin.get(c)) {
        std::cout << "Hello";
        if (c == 'A')
            break;

    }
}
int arr[][2] = { {1,2},{2,6} };
void doSomething() {

    for (auto i{ 0 }; i < 2; i++) {
        for (auto j{ 0 }; j < 2; j++) {
            if (arr[i][j] == 2) {
                goto fot;
            }
            std::cout << "I am In" << std::endl;
        }
    }
fot:
    std::cout << "I am Out";
}
int main() {
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
            continue;
        std::cout << "Hello World!" << std::endl;
    }
    doSomething();
    return 0;
}