#include <iostream>
using namespace std;
int sumNum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n = 5;
    cout << sumNum(n);

    return 0;
}

