#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << "*";

        if (i != 0)
        {

            for (int l = 0; l < (2 * i) - 1; l++)
            {
                cout << " ";
            }

            cout << "*";
        }

        cout << "\n";
    }

    // bottom part
    for (int a = 0; a < n - 1; a++)
    {
        for (int j = 0; j < a + 1; j++)
        {
            cout << " ";
        }
        cout << "*";

        if (a != n - 2)
        {
            for (int k = 0; k < 2 * (n - a) - 5; k++) // 2 * ( n-2-i) -1
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}