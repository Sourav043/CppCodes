#include<iostream>
int x;

void f2() {

    int x = x;

    ::x = 2;

    std::cout << x;

}



int main() {

    f2();

    std::cout << x;

}