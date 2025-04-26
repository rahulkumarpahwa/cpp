#include <iostream>
using namespace std;

class c2;

class c1
{
    int val;
    friend void swap(c1 &, c2 &);

public:
    void setdata(int x)
    {
        val = x;
    }

    void display()
    {
        cout << val <<endl;
    }
};

class c2
{
    int val;

    friend void swap(c1 &, c2 &);

public:
    void setdata(int y)
    {
        val = y;
    }

    void display()
    {
        cout << val <<endl;
    }
};

void swap(c1 &x, c2 &y)
{
    int temp = x.val;
    x.val = y.val;
    y.val = temp;
}

int main()
{

    c1 x;
    x.setdata(34);
    c2 y;
    y.setdata(65);

    x.display();
    y.display();

    swap(x, y);

    x.display();
    y.display();

    return 0;
}