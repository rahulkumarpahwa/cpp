#include <iostream>
using namespace std;

int &getValue(); // function prototype
int a;           // global variable
int main()
{

    getValue() = 20; // why are we assigning value? because the fxn is returning the reference to the variable. not the value.
    cout << a << endl;

    return 0;
}

int &getValue() // function definition
{
    return a;
}