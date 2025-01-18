#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;
    cout << "Enter the Two Numbers: " << endl;
    cin >> a >> b;
    cout << "Enter the Operation you want to perform: " << endl;
    cin >> op;
    if (op == '+')
    {
        cout << " The sum is " << (a + b) << endl;
    }
    else if (op == '-')
    {
        cout << " The sub is " << (a - b) << endl;
    }
    else if (op == '*')
    {
        cout << " The mul is " << (a * b) << endl;
    }
    else if (op == '/')
    {
        cout << " The div is " << (a / b) << endl;
    }
    else if (op == '%')
    {
        cout << " The modulo is " << (a % b) << endl;
    }
    else
    {
        cout << "Invalid Operation";
    }

    return 0;
}