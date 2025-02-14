// Multi level Inheritance depp dive:
#include <iostream>
using namespace std;
class Base1
{
protected:
    int baseInt;

public:
    void setBaseint(int a)
    {
        baseInt = a;
    }
};

class Base2
{
protected:
    int baseInt2;

public:
    void setBaseint2(int a)
    {
        baseInt2 = a;
    }
};

// syntax : class derived: visibility-mode base1, visibility-mode base2
//{
// class definition
//};

class Derived : public Base1, public Base2
{
protected:
    int derivedInt;

public:
    void setDerivedInt(void)
    {
        derivedInt = baseInt + baseInt2;
    }
    void display()
    {
        cout << "the value of derived int is (which is addition of the both the base int) " << derivedInt << "\n";
        cout << "the value of base int1 is " << baseInt << "\n";
        cout << "the value of base int2 is " << baseInt2 << "\n";
    }
};

int main()
{

    Derived d1;
    d1.setBaseint(23);
    d1.setBaseint2(24);
    d1.setDerivedInt();
    d1.display();

    return 0;
}

/*
note:
The inherited derived class will look something like this:
Data members:
baseint --> protected
base2int --> protected
Member functions:
setbaseint() --> public
setbaseint2() --> public
display() --> public

*/