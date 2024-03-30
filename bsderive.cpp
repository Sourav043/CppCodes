#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    void show()
    {
        cout << "Base Show" << endl;
    }
};
class Derived : public Base
{
public:
    void print()
    {
        cout << "Derive Print" << endl;
    }
    void show()
    {
        cout << "Derive show" << endl;
    }
};

int main()
{

    Base *ptr;
    Derived der;
    ptr = &der;

    // ptr->show();
    ptr->show();
    der.show();
    return 0;

    
}