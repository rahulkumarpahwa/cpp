// 6. Program to compute the transpose of a 3x3 matrix
#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3];

    cout << "Enter the elements of a 3x3 matrix: \n";
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Transpose of the matrix: \n";
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}