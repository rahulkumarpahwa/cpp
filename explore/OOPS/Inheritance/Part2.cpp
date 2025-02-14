// single inheritance : using public visibility.

#include <iostream>
using namespace std;

class Base
{
    int data1; // not inheritable
public:
    int data2; // inheritable
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData()
{
    data1 = 10;
    data2 = 20;
}

int Base ::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}

class Derived : public Base
{
    int data3; // private
public:
    void process();
    void display();
};

void Derived ::process()
{
    data3 = data2 * getData1();
}

void Derived ::display()
{
    cout << "Value of data1 " << getData1() << "\n";
    cout << "Value of data2 " << data2 << "\n";
    cout << "Value of data3 " << data3 << "\n";
}

int main()
{

    Derived d1;
    d1.setData();
    d1.process();
    d1.display();
    return 0;
}