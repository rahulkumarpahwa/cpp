// 2. Program to evaluate the expression
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, d, e;
    cout << "Enter values for a, b, c, d, and e: ";
    cin >> a >> b >> c >> d >> e;

    float result = pow((a + b * c - d / e), 2);
    cout << "Result: " << result << endl;

    return 0;
}