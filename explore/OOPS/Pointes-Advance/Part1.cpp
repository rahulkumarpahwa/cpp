//pointers basics
#include <iostream>
using namespace std;

int main()
{
    // basic example
    int a = 4;
    int *ptr = &a;
    *ptr = 999; // reassign the value at the address of a stored in ptr.
    cout << "the value of a is " << *(ptr) << "\n";

    // new keyword
    int *p = new int(40);
    cout << "the value at address p is " << *p << "\n";

    // creating an array
    int *arr = new int[3]; // here we have used [] instead of () to create array instead of the variable. It is pointer to array dynamically allocated.

    arr[0] = 12;
    arr[1] = 13;
    // another way of assigning is :
    *(arr + 1) = 15; // this will assign the value to arr[1].
    arr[2] = 14;
    cout << "the value at address arr[0] is " << arr[0] << " and at arr[1] is " << arr[1] << " and at arr[2] is " << arr[2] << "\n";

    // delete keyword/operator
    delete[] arr; // delete the array. make sure to write the [] to delete the array.

    cout << "the value at address arr[0] is " << arr[0] << " and at arr[1] is " << arr[1] << " and at arr[2] is " << arr[2] << "\n"; // here we will got the garbage values as the array has been deleted.

    return 0;
}