// Copy Constructor

#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number() {} // default constructor must be made when a parameterized constructor is made always.
    Number(int num)
    {
        a = num;
    }

    Number(Number &obj) // here will take the reference of the current obj and pass it to the new object cerated and the value of the obj will be passed on the new obj created. // not a default copy constructor.
    {
        a = obj.a;
    }
    void display()
    {
        cout << "The number is " << a << "\n";
    }
};

int main()

{
    Number x, y, z(45);
    z.display();

 

    // copy constructor : suppose we want to create a object which resembles the object already exist then we will use the copy constructor.
    Number z1(z);
    z1.display();

    y = z; // copy constructor not called.
    y.display();

    Number z3 = z; // copy constructor called, because we create the new object here.
    z3.display();

    return 0;
}

// when we not create a copy constructor the compiler will still provide a default copy constructor to all the classes.