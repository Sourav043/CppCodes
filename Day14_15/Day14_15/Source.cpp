#include <iostream>
void cpy(char* p, const char* q) {
    while (*p++ = *q++)
    {
        std::cout << "d " << *q << std::endl;
    }
}
int main() {
    const char* src = "Harigg";
    char* dest = new char[5];
    cpy(dest, src);
    std::cout << dest;
    delete[] dest;
}
