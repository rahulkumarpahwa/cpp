#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex();
    Complex(int, int);

    void display();
};

Complex ::Complex()
{
    a = 0; // default values
    b = 0; // default values
}

Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
}

void Complex ::display()
{
    cout << "Complex Number is " << a << " + i" << b << "\n";
}

int main()
{
    Complex c(777, 55);
    c.display();

    Complex c2; // when not initiated then default values
    c2.display();

    return 0;
}