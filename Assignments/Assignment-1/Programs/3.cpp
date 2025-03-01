// 3. Program to check if a number is prime without loops
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 1)
    {
        if (num == 2 || num == 3 || num == 5 || num == 7)
        {
            cout << "Prime" << endl;
        }
        else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0)
        {
            cout << "Not Prime" << endl;
        }
        else
        {
            cout << "Prime" << endl;
        }
    }
    else
    {
        cout << "Not Prime" << endl;
    }

    return 0;
}