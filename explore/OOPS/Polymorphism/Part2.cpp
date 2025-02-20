// Pointers to Derived class.

#include <iostream>
using namespace std;

class Base
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying the Base class var: " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying the Base class var: " << var_base << endl;
        cout << "Displaying the Derived class var: " << var_derived << endl;
    }
};

int main()
{
    Base *base_class_pointer;
    Base obj1;
    Derived derived_class_obj2;
    base_class_pointer = &derived_class_obj2; // this will give not error.
    // although it is pointing the derived class still it is base class pointer so when we call the display() function then it will call the base class display function. this is called as late binding.
    // so if the pointer is of base class and it points to derived class then still still you call the member functions then it will call the base class's member functions.

    // now we try to access the base class's variable var:
    (base_class_pointer)->var_base = 24;
    (*base_class_pointer).display();

    // we can't access the var_derived variable of the derived class from base class and it will result in error:
    // base_class_pointer->var_derived = 34; // will throw error.


    // another case : when we create a derived_class_pointer and it points to the derived class then we access the derived class variable and call the display() function, which will call the derived class's member functions.

    Derived obj3;
    Derived *derived_class_obj3 = &obj3;
    (*derived_class_obj3).var_derived = 456;
    derived_class_obj3->display();

    // so basically all the decisions that are made at the time of runtime, which decide the which display function to call is called as run time polymorphism or late binding.
    return 0;
}