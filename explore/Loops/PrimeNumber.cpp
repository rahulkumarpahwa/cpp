#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any Number ";
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
        }
    }

    if (isPrime)
    {
        cout << "The " << n << " is Prime";
    }
    else
    {
        cout << "The " << n << " is not Prime.";
    }
    return 0;
}