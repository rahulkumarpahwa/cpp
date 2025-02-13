// Another example on the Friend Fxn.

// here we will write the fxn which will swap private values of the class c1 and c2.

#include <iostream>
using namespace std;

// forward declaration

class c2;

class c1
{

    int val;

    friend void swap(c1 &, c2 &); // declaration because c2 is not defined yet.

public:
    void inData(int a)
    {
        val = a;
    }

    void display(void)
    {
        cout << val << "\n";
    }
};

class c2
{
    int val2;

    friend void swap(c1 &, c2 &);

public:
    void inData(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2 << "\n";
    }
};

void swap(c1 &a, c2 &b) // we pass the reference of the objects of the class c1 and c2. // friend fxn.
{
    int temp = a.val;
    a.val = b.val2;
    b.val2 = temp;
}

int main()
{

    c1 a;
    c2 b;
    a.inData(2);
    b.inData(3);
    a.display();
    b.display();

    swap(a, b);

    a.display();
    b.display();

    return 0;
}