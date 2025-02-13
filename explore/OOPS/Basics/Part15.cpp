// Constructor with default arguments

#include <iostream>
using namespace std;

class Simple
{
    int data;
    int data2;

public:
    Simple(int a , int b=9) // passing the default argument in the constructor. always put the value in the trailing and start from right to left. can't put in between.
    {
        data = a;
        data2 = b;
    }

    void printData();
};

void Simple ::printData()
{
    cout << "data is " << data << " data2 is " << data2 << "\n";
}

int main()
{
    Simple s(1, 2);
    Simple s2(23); // when the value of data2 is not passed then default argument is used.
    s.printData();
    s2.printData();

    return 0;
}