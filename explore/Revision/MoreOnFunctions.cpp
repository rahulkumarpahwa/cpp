#include <iostream>
using namespace std;


class Y;

class X
{
    int data;
     friend int sum(X, Y);

public:
    void setData(int x)
    {
        data = x;
    }
};

class Y
{
    int data;
    friend int sum(X, Y);

public:
    void setData(int y)
    {
        data = y;
    }
};


int sum(X x , Y y){
    return x.data + y.data;
}


int main()
{

    X x;
    Y y;
    x.setData(3);
    y.setData(6);
    cout << "The sum of the values of data of both the objects is " << sum(x, y);

    return 0;
}