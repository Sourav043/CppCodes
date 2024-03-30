#include <iostream>

class MyClass {
public:
    int value;

    // Constructor
    MyClass(int val) : value(val) {}

    // Copy constructor
    MyClass(const MyClass& other) : value(other.value) {
        std::cout << "Copy constructor called!" << std::endl;
    }
};

int main() {
    MyClass original(5);
    MyClass copy = original; // Copy constructor is called here

    std::cout << "Original value: " << original.value << std::endl;
    std::cout << "Copied value: " << copy.value << std::endl;

    return 0;
}