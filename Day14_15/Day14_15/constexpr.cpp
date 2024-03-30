#include <iostream>

// Function that cannot be evaluated at compile time
constexpr int add(int a, int b) {
    return a + b;
}

// Recursive function that cannot be evaluated at compile time
constexpr int factorial(int n) {
    return n <= 1 ? 1 : n * factorial(n - 1);
}

int main() {
    constexpr int x = 5;
    constexpr int y = add(3, 4);    // Function call is not constexpr

    constexpr int z = factorial(5); // Recursive function call is not constexpr

    std::cout << "x: " << x << "\n";
    std::cout << "y: " << y << "\n";
    std::cout << "z: " << z << "\n";

    return 0;
}
