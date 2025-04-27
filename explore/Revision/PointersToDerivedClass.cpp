#include <iostream>
using namespace std;

class Base
{

public:
    int var_base;
    void display()
    {
        cout << "The base variable is " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_der;
    void display()
    {
        cout << "the derived variable is " << var_der << endl;
    }
};

int main()
{
    Base *b;   // pointer of base class
    Derived d; // object of derived class.

    b = &d; // here the pointer is of base class and object is of derived class.
    //but here if we call the display method still it goono call the function of base class as the pointer is of base class.

    b->var_base = 999;
    b->display(); // this will call the base class fxn. this is called late binding.


    //-----------------------------

    Derived *d2 = new Derived(); // Allocate memory for d2
    d2->var_der = 77;
    d2->display();

    return 0;
}