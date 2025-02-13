#include <iostream>
using namespace std;

bool isPrime(int n)
{
    bool isPrime = true;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
        }
    }
    return isPrime;
}

int main()
{

    if (isPrime(15))
    {
        cout << "It is Prime.";
    }
    else
    {
        cout << "It is not Prime.";
    }

    // print of upto n prime numbers.
    int count = 56;
    for (int i = 2; i < count; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}