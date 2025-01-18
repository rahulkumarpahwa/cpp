#include <iostream>
using namespace std;

int main()
{
    int count = 4;
    int val = 1;
    for (int i = 0; i < count; i++)
    {

        for (int j = 0; j < count; j++)
        {
            cout << val << " ";
            val++;
        }
        cout << endl;
    }

    return 0;
}