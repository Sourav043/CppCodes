#include <iostream>

void func(unsigned n)
{
    int num = n;
    int count {};

    while (n > 0)
    {
        int rev = n % 10;
        n /= 10;
        count++;
    }

    char ch[count];

    for (int i = count - 1; i >= 0; i--)
    {

        int rev = num % 10;
        num /= 10;
        char c = (char)rev + '0';
        ch[i] = c;
    }
    for (int i = 0; i < count; i++)
    {
        std::cout << ch[i];
    }
}
int main()
{

    unsigned n = 1201918;
    func(n);
    return 0;
}