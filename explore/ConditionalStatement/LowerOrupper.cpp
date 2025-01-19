#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter The Character you want to check \n";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "The Character is UpperCase.";
    }
    else
    {
        cout << "The Character is Lowercase.";
    }

    cout << endl;

    // other way:
    if (ch >= 65 && ch <= 91)
    {
        cout << "The Character is UpperCase.";
    }
    else
    {
        cout << "The Character is Lowercase.";
    }

    return 0;
}