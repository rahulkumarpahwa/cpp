// Passing the objects as function arguments:

#include <iostream>
using namespace std;

class Complex
{
    int real;
    int complex;

public:
    void SetComplex(int a, int b)
    {
        real = a;
        complex = b;
    }
    void PrintComplex(void)
    {
        cout << "The complex no. is " << real << "+" << complex << "i" << "\n";
    }
    void SumOfTwoComplex(Complex c1, Complex c2) //here the objects of the functions are passed as arguments.  
    {
        real = c1.real + c2.real;
        complex = c1.complex + c2.complex;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.SetComplex(2, 3);
    c1.PrintComplex();

    c2.SetComplex(3, 4);
    c2.PrintComplex();

    c1.SumOfTwoComplex(c1, c2);
    c1.PrintComplex();
    return 0;
}