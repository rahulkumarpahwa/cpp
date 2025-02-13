#include <iostream>
using namespace std;

void swap(int &, int &);

int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> b;
    cin >> a;
    cout << a << b << endl;
    swap(a, b);
    cout << a << b << endl;
    return 0;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}