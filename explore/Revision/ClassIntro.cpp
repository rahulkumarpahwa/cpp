#include <iostream>
using namespace std;

class Employee
{

private:
    int a, b, c;

public:
    int d, e;
    void setData(int a, int b, int c ,int d ,int e); // declaration

    void getData()
    {
        cout << "the value of a , b , c, d and e is " << a << b << c << d << e << "\n";
    }
};

void Employee ::setData(int a1, int b2, int c3, int d4, int e5)
{
    a = a1;
    b = b2;
    c = c3;
    d = d4;
    e = e5;
}

int main()
{
    Employee e1;
    e1.setData(3,4,5, 6, 7);
    e1.d = 90;
    e1.e = 88;
    e1.getData();
    return 0;
}