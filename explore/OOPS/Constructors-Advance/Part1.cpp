// Constructors in derived classes
#include <iostream>
using namespace std;

/*
Case 1:
class B: public A{
//Order of execution of constructor - > first A() then B()
};
Case 2:
class A: public B, public C{
//Order of execution of constructor - > B() then C() and A()
};

Case 3:
class A: public B, virtual public C{
// Order of execution of constructor -> C () then B() and A()
};

*/

class Base
{
    int data;

public:
    Base(int d)
    {
        data = d;
        cout << "Base constructor called with parameter " << data << endl;
    }
    void print()
    {
        cout << "Base data = " << data << endl;
    }
};

class Base2
{
    int data2; //
public:
    Base2(int d)
    {
        data2 = d;
        cout << "Base2 constructor called with parameter " << data2 << endl;
    }
    void print()
    {
        cout << "Base data2 = " << data2 << endl;
    }
};

class Derived : public Base, public Base2 // first base will be called then base2 will be called. then finally derived constructor will be called. here change in the order will matter for what to call the first base or base2.
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base(a), Base2(b)
    { // these Base(a) and Base2(b) are actually fxn call to the base constructor. here changing the order does not matter with the call to base class constructor.

        derived1 = c;
        derived2 = d;
        cout << "Derived constructor called with parameter " << "\n";
    }
    void print(){
        cout << "Derived data = " << derived1 << endl;
        cout << "Derived data = " << derived2 << endl;
    }
};

int main()
{
    Derived d1(12, 13, 1, 2);
    d1.print();
    d1.Base::print();
    d1.Base2::print();

    return 0;
}
