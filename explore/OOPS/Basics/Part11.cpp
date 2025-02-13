// constructor

// normally we use the public data member fxn to set the values in the obj. It would be good if we set the values in the obj while creating it. this can be done with the help of constructors.

#include <iostream>
using namespace std;

class ComplexNumber
{
    int a, b;
    // creating a constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class.
    // It is automatically invoked whenever an object is created.
    // It should be always public.
    // It does not have any return type.

public:
    ComplexNumber(); // constructor declaration

    void printData()
    {
        cout << "value of complex number " << a << "+" << b << "i" << "\n";
    }
};

ComplexNumber::ComplexNumber() // default constructor: does not take parameter.
{
    a = 10;
    b = 102;
}

int main()
{
    ComplexNumber c, c2, c3;
    c.printData();
    c2.printData();
    c3.printData();

    return 0;
}

/*
Characteristics of Constructors
1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments. like we put a=10 and b=102 above.
5. We cannot refer to their address.
*/