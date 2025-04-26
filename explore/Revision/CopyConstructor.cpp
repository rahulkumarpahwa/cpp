#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }


    // when no copy consructor is found then default copy constructor will be called.
    Number(Number &obj){ //taking the reference of the object of the Number class object.
        cout<<"Copy Constructor called "<<endl;
        a = obj.a;
    }

    void display()
    {
        cout << a << endl;
    }
};

int main()
{
    Number x, y, z(89);
    x.display();
    y.display();
    z.display();



    Number z1;
    z1 = z; // not called copy constructor, not called during assignment.
    z1.display();
    
    
    
    Number z2(x); // copy constructor invoked
    z2.display();


    Number z3 = z; // copy constructor called, during creation.
    z3.display();
    return 0;
}