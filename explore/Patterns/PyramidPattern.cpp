#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        // 1st Half Pattern

        for (int j = n - i -1 ; j > 0; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <=i+1; k++) 
        {
            cout << k;
        }

        // 2nd Half Pattern

        for (int l = i; l >=1; l--)
        {
            cout << l;
        }

        cout << "\n";
    }

    return 0;
}