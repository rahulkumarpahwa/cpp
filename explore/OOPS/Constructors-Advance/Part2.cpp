// Initialization list in Constructors : It is way of giving value to class data members in the constructor.

#include <iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initialization-section
{
// assignment + other code; // same as before we create the body of the constructor
}

eg:
class Test{
int a;
int b;
public:
    Test(int i, int j) : a(i), b(j) // this will set the initial value of a to i and b to j. this is shortcut to the assigning a = i and b = j.
    {
            // constructor body || constructor definition
    }

};
*/
class Test
{
private:
    int a; // initialzed first
    int b; // initialzed second

public:
    // Test(int i, int j) : a(i), b(j) // this will set the initial value of a to i and b to j.
    // Test(int i, int j) : a(i), b(i+j) // case 2. this will work.
    // Test(int i, int j) : a(i), b(2* j) // case 3.  this will work.
    // Test(int i, int j) : a(i), b(a + j) // case 4.  this will work also.
    // Test(int i, int j) : b(j), a(i + b) // case 5 --->RED FLAG  this will not work. this will not work because whe we define the data member then one defined first will be initalized first. here a will be initialized so that's why it will throw us garbage value. here the value of b can't be initialized so while putting value into a the value of b can't be found so that's why we got the garbage in b.
    // to get the value even in this case we can just need to change the order of declaration of a and b above under private members.
    Test(int i, int j) : a(i) // case 6. this will work
    {
        b = j;
        cout << "the constructor called " << "\n";
        cout << "the value of a is " << a << "\n";
        cout << "the value of b is " << b << "\n";
    }
};

int main()
{
    Test t1(23, 24);

    return 0;
}