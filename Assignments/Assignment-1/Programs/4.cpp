// 4. Program to demonstrate post - increment and pre - increment
#include <iostream>
    using namespace std;

int main()
{
    int i = 5;

    cout << "Post-increment (i++): " << i++ << endl; // Outputs 5, then increments i
    cout << "Value of i after post-increment: " << i << endl;

    cout << "Pre-increment (++i): " << ++i << endl; // Increments i, then outputs 7

    return 0;
}