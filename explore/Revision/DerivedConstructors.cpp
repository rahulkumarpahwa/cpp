#include <iostream>
using namespace std;

class Base
{
    int x;

public:
    Base(int x)
    {

        this->x = x;
        cout << "base class Constructor" << endl;
    }

    void display()
    {
        cout << "the base x " << this->x << endl;
    }
};

class Derived : public Base
{

    int y;

public:
    Derived(int x, int y) : Base(x)
    {
        this->y = y;
    }

    void display()
    {
        Base::display();
        cout << "the value of y  " << this->y << endl;
    }
};

int main()
{
    Derived d(23, 56);
    d.display();

    return 0;
}