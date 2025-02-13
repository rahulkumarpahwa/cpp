// friend Functions
/* when we write a fxn normally and then try to access the class data members within it. then it creates error as the class properties are private and can't be access. so to make then access we use the friend fxn. In which we create a declaration in public access specifier as:
friend returntype fxn-name(datatype parameters, datatype parameters);
Friend fxn does not become the part of the class but just a fxn which can access the class properties and methods.

properties of the friend fxn:
1. Not in the scope of the class. just the access of the class members and fxn is given.
2. since it is not in the scope of the class, it cannot be call with the object of the class.
c1.sumComplex() // invalid
3. can be invoked without the help of any object.
4. usually contains the objects as arguments, but without it still gonna call the friend fxn.
5. can be declared inside public or private section of the class.
6. It cannot access the members directly by their names and need "object_name.member_name" to access any member.
*/

#include <iostream>
using namespace std;

class ComplexNumber
{
    int real;
    int complex;

public:
    void setNumber(int a, int b)
    {
        real = a;
        complex = b;
    }
    void printNumber(void)
    {
        cout << "The complex no. is " << real << "+" << complex << "i" << endl;
    }

    friend ComplexNumber sumComplex(ComplexNumber c1, ComplexNumber c2); // creating the sumComplex as friend fxn.
};
ComplexNumber sumComplex(ComplexNumber c1, ComplexNumber c2)
{
    ComplexNumber c3;                     // created new object.
    c3.real = c1.real + c2.real;          // real and complex are private variables. can't access directly.
    c3.complex = c1.complex + c2.complex; // real and complex are private variables. can't access directly.
    return c3;
}

int main()
{
    ComplexNumber c1, c2, sum;
    c1.setNumber(2, 3);
    c1.printNumber();
    c2.setNumber(1, 4);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}