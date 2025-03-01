// 1. Program to calculate area and circumference of a circle
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float area = 3.14159 * radius * radius;
    float circumference = 2 * 3.14159 * radius;

    cout << fixed << setprecision(2);
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;

    return 0;
}