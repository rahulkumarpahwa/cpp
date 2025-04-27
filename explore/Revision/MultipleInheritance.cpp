#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    Base1(int base1int)
    {
        this->base1int = base1int;
    }
};

class Base2
{
protected:
    int base2int;

public:
    Base2(int base2int)
    {
        this->base2int = base2int;
    }
};

class Derived : public Base1, public Base2
{

protected:
    int derivedint;

public:
    Derived(int x, int y) : Base1(x), Base2(y)
    {
        this->derivedint = x + y;
    }

    void display()
    {
        cout << "the variables of the base1, base2 and derived1 are " << base1int << " , " << base2int << " , " << derivedint;
    }
};

int main()
{
    Derived d(10, 20);
    d.display();
    return 0;
}