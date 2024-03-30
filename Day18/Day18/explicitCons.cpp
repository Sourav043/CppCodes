#include<iostream>
class MyClass {
public:
    MyClass(int value) {
        this->value = value;
    }

    int getValue() const {
        return value;
    }

private:
    int value;
};

int main() {
    MyClass obj1 = 42; // Implicit conversion from int to MyClass
    int num = obj1.getValue(); // Works fine

    // With 'explicit': No implicit conversion allowed
    // MyClass obj2 = 42; // Error: No viable conversion from int to MyClass
    MyClass obj2(42); // Explicit construction
    int num2 = obj2.getValue(); // Works fine

    return 0;
}