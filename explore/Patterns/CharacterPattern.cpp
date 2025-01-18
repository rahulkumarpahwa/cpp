#include <iostream>
using namespace std;

int main()
{
    int count = 6;
    for (int i = 0; i < count; i++)
    {
        char ch = 'A';
        for (int i = 0; i < count; i++)
        {
            cout << ch << " ";
            ch++; // first character is converted to integer and then 1 is added, but we are storing it back to char, so it got casted back to char.
        }
        cout << endl;
    }

    return 0;
}