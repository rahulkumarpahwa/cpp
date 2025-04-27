#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imag;

public:
    Complex()
    {
    }
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    void getData()
    {
        cout << "the complex Nmber " << this->real << " + i" << this->imag << endl;
    }
};

int main()
{
    Complex c1(78, 89);
    Complex *ptr;
    ptr = &c1;

    (*ptr).getData();

    //----------------------------

    Complex *ptr2 = new Complex(88, 99);

    ptr2->getData();

    ///----------------------------

    Complex *ptr3 = new Complex[3]{
        Complex(77, 33),
        Complex(777, 999),
        Complex(888, 111)};

    ptr3->getData();
    ptr3[0].getData();
    (*ptr3).getData();

    ptr3[1].getData();
    (ptr3+1)->getData();
    (*(ptr3+1)).getData();
    ptr3[2].getData();







    return 0;
}