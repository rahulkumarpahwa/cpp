#include <iostream>
using namespace std;

int main()
{
    int n = 50;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;

        if (i == 5)
        {
            break;
        }
    }

    cout << "The Sum of n numbers is: " << sum;

    return 0;
}