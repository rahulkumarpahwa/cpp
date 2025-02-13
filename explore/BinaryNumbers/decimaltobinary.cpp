#include <iostream>
using namespace std;

int inBinary(int n)
{
    int ans = 0, pow = 1;
    while (n > 0)
    {
        int rem = n % 2;
        ans += (pow * rem);
        n = n / 2;
        pow = pow * 10;
    }

    return ans;
}

int main()
{

    for (int i = 1; i <= 10; i++)
    {

        cout << inBinary(i)<<"\n";
    }
    return 0;
}