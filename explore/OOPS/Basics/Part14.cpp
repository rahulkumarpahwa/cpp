// Constructor Overloading : almost same as fxn overloading.

#include <iostream>
using namespace std;

class ComplexNumber
{
    int a, b;

public:
    ComplexNumber(int x, int y)
    {
        a = x;
        b = y;
    }

    ComplexNumber(int x) // multiple constructor
    {
        a = x;
        b = 34;
    }

    ComplexNumber(){
        a = 0;
        b = 0;
    }

    void printComplex()
    {
        cout << "complex number is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    ComplexNumber c(2, 4);
    c.printComplex();

    ComplexNumber d(23);
    d.printComplex();

    ComplexNumber e;
    e.printComplex();
    return 0;
}