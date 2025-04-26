#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    friend Complex sumComplex(Complex c1, Complex c2);
    // the sumComplex is allowed to access the private data members 

    void printDetails()
    {
        cout << "Complex Number " << a << " + i" << b << endl;
    }
};

Complex sumComplex (Complex c1, Complex c2){
    Complex c3; 
    c3.setNumber((c1.a + c2.a) , (c1.b+ c2.b));
    return c3;
}

int main()
{
    Complex c1, c2, c3;
    c1.setNumber(2, 3);
    c2.setNumber(6, 7);
    c1.printDetails();
    c2.printDetails();
    c3 = sumComplex(c1, c2);
    c3.printDetails();

    return 0;
}