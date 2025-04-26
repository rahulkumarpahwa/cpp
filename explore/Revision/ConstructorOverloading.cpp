#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void display()
    {
        cout << "the complex no is " << a << " + i" << b << endl;
    }
};

int main()
{
    Complex c(3, 4);
    Complex c2(4);
    Complex c4;
    c.display();
    c2.display();
    c4.display();
    return 0;
}