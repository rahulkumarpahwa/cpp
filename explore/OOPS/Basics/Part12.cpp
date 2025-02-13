// Parameterized and default Constructor

#include <iostream>
using namespace std;

class ComplexNumber
{
    int a, b;

public:
    ComplexNumber();               // constructor declaration : default
    ComplexNumber(int a1, int b1); // constructor declaration : parameterized

    void printData()
    {
        cout << "value of complex number " << a << "+" << b << "i" << "\n";
    }
};

ComplexNumber::ComplexNumber() // default constructor: does not take parameter.
{
    a = 0;
    b = 0;
}

ComplexNumber ::ComplexNumber(int a1, int b1) // parameterized constructor : takes parameter.
{
    a = a1;
    b = b1;
}

int main()
{
    ComplexNumber c1;
    c1.printData();

    ComplexNumber c2(22, 44); // Implicit Calling of constructor
    c2.printData();

    ComplexNumber c3 = ComplexNumber(34, 78); // Explicit calling of constructor
    c3.printData();

    return 0;
}