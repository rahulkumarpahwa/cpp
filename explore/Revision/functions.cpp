#include <iostream>
using namespace std;

// int sum(int a, int b); // function prototyping
int sum(int ,int); // function prototyping

int main()
{
    int a;
    int b;

    cout << "enter a " << "\n";
    cin >> a;

    cout << "enter b" << "\n";
    cin >> b;

    cout << "the sum is " << sum(a, b); // actual parameters

    return 0;
}

int sum(int a, int b) // formal parameters
{
    return a + b;
}