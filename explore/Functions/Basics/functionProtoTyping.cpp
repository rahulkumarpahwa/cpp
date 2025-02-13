#include <iostream>
using namespace std;

void printApple(int); // function prototyping

int main()
{
    printApple(34); // function call

    return 0;
}

void printApple(int a) // function defination
{
    cout << "Apple is printed" << a << endl;
}