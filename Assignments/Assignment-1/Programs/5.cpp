// 5. Program to calculate sum of even numbers and product of odd numbers in an array
#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    cout << "Enter 10 integers: ";

    for (int i = 0; i < 10; ++i)
    {
        cin >> arr[i];
    }

    int sumEven = 0;
    int productOdd = 1;

    for (int i = 0; i < 10; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            sumEven += arr[i];
        }
        else
        {
            productOdd *= arr[i];
        }
    }

    cout << "Sum of even numbers: " << sumEven << endl;
    cout << "Product of odd numbers: " << productOdd << endl;

    return 0;
}