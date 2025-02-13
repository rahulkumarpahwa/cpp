#include <iostream>
using namespace std;

inline int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 20, b = 40;
    int sum = add(a, b); // fxn would be expanded in line where it is invoked.
    cout << sum << endl;
    return 0;
}