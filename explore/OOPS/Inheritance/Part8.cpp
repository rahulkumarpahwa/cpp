// Ambiguity resolution in inheritance.

#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "Base 1 : How are you?" << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "Base 2 : How are you?" << endl;
    }
};

class derived : public base1, public base2
{

    public : 
    void greet(){
        base2::greet(); // resolving the ambiguity problem with the function greet.
    }
};

int main()
{

    base1 b;
    b.greet();
    base2 b2;
    b2.greet();
   
    derived d;
    // d.greet(); // ambiguous because compiler doesn't know which base class's greet method should be called. to avoid it we use the scope resolution operator with base class.
    d.base1 ::greet();

    // or other way is just create the same method in derived class and inside it write  base2::greet(); ie. base-class-name :: method-name();

    return 0;
}