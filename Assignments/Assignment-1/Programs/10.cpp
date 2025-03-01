// 10. Program to perform arithmetic operations
#include <iostream>
using namespace std;

int calculate(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return b != 0 ? a / b : 0;
    default:
        return 0;
    }
}

int main()
{
    int num1, num2;
    char op;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    int result = calculate(num1, num2, op);
    cout << "Result: " << result << endl;

    return 0;
}
