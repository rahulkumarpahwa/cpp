#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number";
    cin >> a;
    if (a >= 0)
    {
        cout << "The " << a << " is Positive.";
    }
    else
    {
        cout << "The " << a << " is Negative.";
    }

    return 0;
}