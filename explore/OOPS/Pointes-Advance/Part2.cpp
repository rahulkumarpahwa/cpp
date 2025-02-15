// Pointers to Objects and Arrow Operator

#include <iostream>
using namespace std;

class Complex
{

    int real, imag;

public:
    void setData(int x, int y)
    {
        real = x;
        imag = y;
    }
    void display(void)
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1;
    c1.setData(1, 34);
    c1.display();

    Complex *ptr = &c1; // same as variable pointer.
    // other way of creating a pointer to object is :
    Complex *ptr2 = new Complex;

    (*ptr).display(); // () is compulsory because the . operator has more precedence than the . operator.

    (*ptr2).setData(1, 4);
    (*ptr2).display(); // () is mandatory because the . operator has more precedence than the .

    // arrow operator:
    // we can access the method of object created with pointer with help arrow operator as well as:
    ptr->display(); // arrow operator is same as (*ptr).display();

    // array of objects:
    Complex *ptr3 = new Complex[5]; // this will create an array of objects of 5 elements.

    ptr3->setData(8, 9);  // this will point to the first element of the array of objects. // add ptr3 + 1 to point to the next element.
    ptr3->display(); // this will display the data of the first element of the array.

    cout << "Enter the values for setting up the array of objects" << "\n";
    for (int i = 0; i < 5; i++)
    {
        int a, b;
        cin >> a >> b;
        ptr3[i].setData(a, b);
    }
    for (int i = 0; i < 5; i++)
    {
        ptr3[i].display();
    }

    return 0;
}
