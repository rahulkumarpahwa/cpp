#include <iostream>
using namespace std;
int nthFibo(int n) // 0th based indexing. (https://www.geeksforgeeks.org/cpp-program-for-fibonacci-numbers/)
{
    if (n == 1 || n == 0)
    {
        return n ;
    }
    else
    {
        return nthFibo(n - 1) + nthFibo(n - 2);
    }
}

int main()
{
    cout << nthFibo(3);

    return 0;
}