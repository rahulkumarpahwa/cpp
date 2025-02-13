// creating a factorial function to show the recursion.

#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int result = fact(5);
    cout << result << endl;

    return 0;
}