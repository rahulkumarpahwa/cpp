// Friend class & Member Friend Functions

#include <iostream>
using namespace std;

// forward declaration
class ComplexNumber; // means declare the class before it is actually created so as to give guarantee to the compiler that it exits further.

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    ComplexNumber sumComplexNumber(ComplexNumber, ComplexNumber);
    // fxn prototype || fxn declaration only.

    // we are here just declaring the fxn and not get it defined because we can't define it without having its structure defined in the class, so that why the return type and parameters datatype passed are the used here only. and later we will define the fxn after the definition of the class.
};

class ComplexNumber
{
    int real;
    int complex;

    // individual fxn as a friend.
    friend ComplexNumber Calculator ::sumComplexNumber(ComplexNumber, ComplexNumber); // we give access to the sumComplexNumber as a friend function. we can write friend fxn anywhere either inside the private or the public part.

    // declaration of whole class as friend.
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        real = n1;
        complex = n2;
    }
    void printNumber()
    {
        cout << "Your Number is " << real << "+" << complex << "i" << "\n";
    }
};

ComplexNumber Calculator ::sumComplexNumber(ComplexNumber c1, ComplexNumber c2)
{
    ComplexNumber c3;
    c3.real = c1.real + c2.real;
    c3.complex = c1.complex + c2.complex;
    return c3;
}

int main()
{
    ComplexNumber c1, c2, c3;
    c1.setNumber(2, 3);
    c2.setNumber(4, 5);
    c1.printNumber();
    c2.printNumber();

    Calculator cal;

    c3 = cal.sumComplexNumber(c1, c2);
    c3.printNumber(); // this will sum the of two objects of the another class and result will be returned in the another object of the another class ie. ComplexNumber.

    return 0;
}

/*summary : here we make the fxn of the one class the friend of the other class. so that the fxn of the one class can access the data members and fxn of the whole class.
eg. here is the case where calculator class fxn is make friend of the complexnumber class and now the fxn sumcomplexnumber of the calculator class can access the complexnumber class completely.

also do this we need to do the forward declaration as we need to define the class before whose fxn is going to access the other class.

so we need to do forward declaration of the class which is going to be access by the fxn of the other class.



case 2: like here above we make the fxn of the one class fxn of the other class. but this is difficult when we are having the multiple fxn of one class access the other class. so to solve this problem we can make the whole class friend of the other class.

*/