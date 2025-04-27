#include <iostream>
using namespace std;

class Base
{

public:
    int var_base = 1;
    virtual void display() // just write virtual here
    {
        cout << "1. The base variable is " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_der = 2;
    void display()
    {
        cout << "2. the derived variable is " << var_der << endl;
    }
};

int main()
{
    Base *b;   // pointer of base class
    Derived d; // object of derived class.

    b = &d; // here the pointer is of base class and object is of derived class.
    // but here if we call the display method still it goono call the function of base class as the pointer is of base class.

    b->var_base = 999;
    cout<<"the base value is"<<b->var_base<<endl;


    b->display(); // now this will call the display of the base class and not the derived class as we have written the keyword virtual and before it was this will call the base class fxn. this is called late binding.

    //-----------------------------

    Derived *d2 = new Derived(); // Allocate memory for d2
    d2->var_der = 77; // this will do as before, calling the derived class.
    d2->display();

    return 0;
}