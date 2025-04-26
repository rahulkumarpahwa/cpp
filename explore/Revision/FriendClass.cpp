#include <iostream>
using namespace std;

class ComplexNumbers; // declaration of class, needed only when we use the class datatype somehere in other class before. forward declaration.

class Calculator
{

public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumRealComplex(ComplexNumbers, ComplexNumbers);

    int sumImagComplex(ComplexNumbers, ComplexNumbers);
};

class ComplexNumbers
{
    int a;
    int b;


    friend class Calculator;
    // friend class Calculator; // Declare the entire Calculator class as a friend


    // making the methods as friend
    // friend int Calculator ::sumRealComplex(ComplexNumbers c1, ComplexNumbers c2);

    // friend int Calculator ::sumImagComplex(ComplexNumbers c1, ComplexNumbers c2);

public:
    void setNumbers(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "Complex Number : " << a << " + i" << b << endl;
    }
};

int Calculator ::sumRealComplex(ComplexNumbers c1, ComplexNumbers c2)
{
    return c1.a + c2.a;
}

int Calculator ::sumImagComplex(ComplexNumbers c1, ComplexNumbers c2)
{
    return c1.b + c2.b;
}

int main()
{

    ComplexNumbers c1, c2;
    c1.setNumbers(4, 5);
    c2.setNumbers(8, 10);
    c1.display();
    c2.display();

    Calculator c;
    cout << "the sum of the real complex parts " << c.sumRealComplex(c1, c2) << endl;

    cout << "the sum of the imag complex parts " << c.sumImagComplex(c1, c2) << endl;

    return 0;
}