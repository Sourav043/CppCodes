#include<iostream>
#include <cstring>

class A {
public:
    int* ptr;
    A() {
        std::cout << "Const" << std::endl;
    }

    A(A& obj) {
        ptr = new int;
        std::cout << "Copy" << std::endl;
    }

    A(A&& obj) noexcept {
        ptr = obj.ptr;
        std::cout << "Move" << std::endl;
    }

    ~A() {
        std::cout << "Destructor" << std::endl;
    }
};
/*
int main() {

    A a1;
    A a3 = a1;
    A a2 = std::move(a1);

}*/