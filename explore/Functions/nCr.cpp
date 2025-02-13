#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int findnCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

// finding nCr for the given n and r.
int main()
{

    cout << findnCr(8, 2);

    return 0;
}