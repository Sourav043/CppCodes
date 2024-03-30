#include<iostream>
void print(double d) {
    std::cout << d << std::endl;
}
void print(long l) {
    std::cout << l << std::endl;
}
void f()
{
    print(1L); // print(long)
    print(1.0); // print(double)
    print(2.07); // error, ambiguous: print(long(1)) or print(double(1))?
}
float sqrt(float f) {
    return f;
}
double sqrt(double ff) {
    return ff;
}

void ff(double da, float fla)
{
    float fl = sqrt(da); // call sqrt(double)
    double d = sqrt(da); // call sqrt(double)
    fl = sqrt(fla); // call sqrt(float)
    d = sqrt(fla); // call sqrt(float)
}
int main() {
    f();
}