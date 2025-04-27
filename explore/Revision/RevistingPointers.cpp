#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *p = &a;

    cout << "the value of a is " << *p << endl;

    int *ptr = new int(50); // alloocate and dynamic memory
    delete ptr; // deleted pointer, now *ptr will get the garbage value.
    cout << "the value of the a is " << *ptr << endl;


    int *ptr2 = new int[5];
    ptr2[0] = 88;
    ptr2[1] = 69;
    ptr2[2] = 68;
    ptr2[3] = 56;
    ptr2[4] = 66;

    delete[] ptr2;

    cout<<"value of the arr is "<<*ptr2<<endl;
    cout<<"value of the arr is "<<*(ptr2+ 1)<<endl;
    cout<<"value of the arr is "<<*ptr2+1<<endl;


    return 0;
}