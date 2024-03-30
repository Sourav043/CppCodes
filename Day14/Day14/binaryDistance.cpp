#include<iostream>
int main() {
    auto n{ 129 }, prev{ -1 }, maxDis{ 0 };

    for (int i{ 0 }; i < 32; i++) {

        if (prev == -1) {
            if (((n >> i) & 1) == 1)prev = i;
        }
        else {
            if (((n >> i) & 1) == 1) {
                maxDis = std::max(maxDis, i - prev - 1);
                std::cout << "Prev 1 " << prev << " Curr 1 " << i << " MaxDis " << maxDis << std::endl;
                prev = i;
            }
        }
    }
    std::cout << maxDis;
    return 0;
}


/*


#include <iostream>

enum Traffic_light { red, yellow, green };

enum class Warning { green=50, yellow, orange, red }; // fire alert lev els

Warning a4 = Warning::green;

void f(Traffic_light x)

{

if (x == Traffic_light::red) {

    std::cout<<x<<std::endl;/* ... 

std::cout << (int)a4 << std::endl;

std::cout << Warning::green << std::endl;

std::cout << (int)Warning::yellow << std::endl;

std::cout << Traffic_light::green << std::endl; }

 }





 int main() {

     Traffic_light ob;

     f(ob);

 }


*/