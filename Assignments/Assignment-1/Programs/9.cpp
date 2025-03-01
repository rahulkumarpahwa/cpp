// 9. Program to demonstrate dynamic binding using function pointers
#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "Sum: " << a + b << endl;
}

void subtract(int a, int b)
{
    cout << "Difference: " << a - b << endl;
}

int main()
{
    void (*operation)(int, int);
    int choice, x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Choose operation (1 for add, 2 for subtract): ";
    cin >> choice;

    if (choice == 1)
    {
        operation = add;
    }
    else
    {
        operation = subtract;
    }

    operation(x, y);

    return 0;
}