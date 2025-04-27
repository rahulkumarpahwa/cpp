#include <iostream>
using namespace std;

int main()
{
    int a = 99;
    int *p = &a;
    cout << "The value at using the pointer is " << *p << endl;
    cout << "the address of the a is " << &a << endl;
    cout << "the address of the a is " << p << endl;

    // pointer to pointer
    int **r = &p;
    cout << "the address of p is " << &p << endl;
    cout << "the address of p is " << r << endl;
    cout << "the value of  adderss at r is " << *r << endl;
    return 0;
}
