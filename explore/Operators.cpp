#include <iostream>
using namespace std;

int main()
{
    // Arithmetic Operators:
    int a = 20, b = 5;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    // Special Case with the division:
    // case 1:
    cout << (5 / (double)(2)) << endl; // here we have first typecast the 2 to double and then we divide so the result will be double.

    // case 2:
    int result = (5 / (double)2);
    cout << "the value of the result will be " << result << endl; // here we will get 2 because the result has type int.

    // Relational Operator:
    cout << "Relational Operators: " << endl;
    cout << "a > b = " << (a > b) << endl; // for true :1 will be printed and 0 will be for false.
    cout << "a >= b = " << (a >= b) << endl;
    cout << "a < b = " << (a < b) << endl;
    cout << "a <= b = " << (a <= b) << endl;
    cout << "a == b = " << (a == b) << endl;
    cout << "a != b = " << (a != b) << endl;

    int c = 24;

    // Logical Operators:
    cout << "Logical Operators" << "\n"; // for true :1 will be printed and 0 will be for false.
    cout << "(a > b && b > c)  = " << ((a > b) && (b > c)) << endl;
    cout << "(a == b || a >= c) = " << ((a == b) || (a >= c)) << endl;
    cout << "!(a < b) = " << !(a < b) << endl;

    return 0;
}