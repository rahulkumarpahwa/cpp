// introduction :
#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void getData(); // function declaration || prototype
};

void Employee::getData()
{ // way to define the function outside in cpp
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    cout << d << "\n";
    cout << e << "\n";
}

int main()
{

    Employee e1;
    // e1.a = 33; //can't do that because a is private member
    e1.d = 45;
    e1.e = 989;
    e1.setData(20, 30, 40);
    e1.getData();

    return 0;
}