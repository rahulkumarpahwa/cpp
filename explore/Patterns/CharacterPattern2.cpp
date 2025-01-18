#include <iostream>
using namespace std;

int main()
{
    int count = 6;
    char ch = 'A';
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}