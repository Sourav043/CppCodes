#include <iostream>
#include<vector>

//Can we use auto in parameter
void printfromBack(char s[], int n) {

    //we can't take this s as an arrray coz of it when we pass it it takes as an pointer not an array 
    // int size = sizeof(s)/sizeof(s[0]);

    std::cout << "{";
    do {
        std::cout << s[--n];
    } while (n > 0);
    std::cout << "}";
}
int main() {
    char s[]{ "SouravKitkat" };
    int size = sizeof(s);

    // printfromBack(s,size);

    std::vector<int> c = { 1, 2, 3, 4, 5 };
    for (auto p = begin(c); p != end(c); p++) {
        std::cout << *p << std::endl;
    }
    return 0;
}