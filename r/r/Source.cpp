#include <iostream>
class ValueX {
public:
    ValueX() : m_value([=]() {return 10; }()) {}
    void func() {
        std::cout << m_value;
    }
private:
    int m_value;
};

int main() {
    ValueX v;
    v.func();
}