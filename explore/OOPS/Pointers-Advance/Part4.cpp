// this Pointer
//  this is a keyword which is a pointer which points to the object which invokes the member function. this keyword is also used to return the pointer to the object which invokes the member function inside which we have the this pointer.
#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void seta(int a)
    {
        // a = a;  // this will throw a garbage value.
        this->a = a;
    }

    A &returnObj() // Returning by reference (A &) instead of by value (A) avoids creating a copy of the object. so that's why we do this.
    {
        return *this; /*this: A pointer that refers to the current object (inside a member function). *this: Dereferencing this gives the actual object.
        Returning *this means we return the current object itself.*/
    }
    void display()
    {
        cout << "a = " << a << endl;
    }
};

int main()
{
    A a;
    a.seta(11);
    a.display(); // we got the garbage value here because the compiler doesn't differentiate between a and a ie. seta(int a){ a = a;}.
    a.returnObj().display();
    return 0;
}