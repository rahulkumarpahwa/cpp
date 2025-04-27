// virtual functions

#include <iostream>
using namespace std;

class Base
{
    int a;

public:
    Base(int a)
    {
        this->a = a;
    }

    virtual void display()
    {
        cout << "The value of base variable is " << a << endl;
    }

    // virtual void display() = 0; // pure virtual function and class become abstract.
};

class Derived1 : public Base
{
    int d1;

public:
    Derived1(int a, int d1) : Base(a)
    {
        this->d1 = d1;
    }
    void display()
    {
        cout << "The value of the derived 1 variable is " << this->d1 << endl;
    }
};

class Derived2 : public Base
{
    int d2;

public:
    Derived2(int a, int d2) : Base(a)
    {
        this->d2 = d2;
    }
    void display()
    {
        cout << "The value of the derived 2 variable is " << this->d2 << endl;
    }
};

int main()
{
    Base *b1, *b2;

    Derived1 d1(22, 23);
    Derived2 d2(22, 89);

    b1 = &d1;
    b2 = &d2;

    b1->display();
    b2->display();

    return 0;
}