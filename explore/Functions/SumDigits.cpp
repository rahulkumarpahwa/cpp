#include <iostream>
using namespace std;

int sumDigit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int lastdig = n % 10;
        n = n / 10;
        sum += lastdig;
    }

    return sum;
}

int main()
{

    cout << sumDigit(12050);
    return 0;
}
