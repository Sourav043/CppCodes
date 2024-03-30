#include <iostream>

int fun(int k) {
    throw k;
}
int main() {
    int i = 1;
    try {
        fun(5);
        throw 8;
        std::cout << "Hello" << std::endl;
    }
    catch (int e) {
        std::cout << "Cat " << e << std::endl;
    }
    catch (...) {
        std::cout << "ThreeDots " << std::endl;
    }
    std::cout << "Last Line" << std::endl;
    return 0;
}
