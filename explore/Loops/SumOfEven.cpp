#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int sum = 0;
    for (int i = 2; i <= n; i = i + 2)
    {
        sum += i;
    }

    cout << "Sum is " << sum;
    return 0;
}