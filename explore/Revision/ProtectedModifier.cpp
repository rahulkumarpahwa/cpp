#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;

public:
};

class Derived : protected Base
{

};

int main()
{
    Base b;
    Derived d;
    // cout<<b.a; // can't access as it is protected in Base
    // cout<<d.a; // can't access as it is protected in Derived.

    return 0;
}