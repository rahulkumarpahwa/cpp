#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;

public:
    Simple(int a, int b = 9) // b is given the default argument. always default argument are given from right to left and can't directly give to left and skip right.
    {
        data1 = a;
        data2 = b;
    }

    void display();
};

void Simple ::display()
{
    cout << "Number " << data1 << " and " << data2 << endl;
}

int main()
{
    Simple s(3, 5);
    s.display();

    Simple s2(3); // data2 will take the default value 9
    s2.display();

    return 0;
}