// nesting of member functions.
#include <iostream>
#include <string>
using namespace std;
// C++ --> initially called-- > C with classes by stroustroup class
// It is extension of structures(in C).
// structures had limitations :
// 1. members are public
// 2.  No methods
// classs-- > structures + more >
// classes can have methods and properties and in classes can make few members as private and few as public.
// You can declare object along with class declaration.
/*
Eg:
class Student{
// class definition
} Rohan, Mohan;
// Here Rohan, Mohan are the objects
*/

// Nesting of Member functions:
class Binary
{
private:
    string s; // private member by-default
    void chk_bin(void);

public:
    void read();
    void OneComplement();
    void printBinary(); // fxn prototype || fxn declaration
};

void Binary::read()
{
    cout << "Enter a binary Number" << endl;
    cin >> s;
}

void Binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format." << endl;
            exit(0); // when if a single incorrect character is found
        }
    }
}

void Binary ::OneComplement(void)

{

    chk_bin(); // we don't need to write the any object or dot operator to access it. this is nesting fxn.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {

            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void Binary::printBinary()

{
    cout << "Your Binary Number is:";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << "\n";
}

int main()
{

    Binary b;
    b.read();
    // b.chk_bin(); // we will try to make this fxn nested and private.
    b.printBinary();
    b.OneComplement();
    b.printBinary();
    return 0;
}

// so if we make the fxn private then we can't access it outside directly and for that we use the nesting of the functions. ie. we can call that private function inside other fxn.