#include <iostream>
using namespace std;

class ComplexNumbers
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDataBySum(ComplexNumbers c1, ComplexNumbers c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }

    void showDetails()
    {
        cout << "Complex no is " << a << " + i" << b << "\n";
    }
};

int main()
{
    ComplexNumbers c1, c2, c3;
    c1.setData(3, 4);
    c1.showDetails();
    c2.setData(8, 9);
    c2.showDetails();
    c3.setDataBySum(c1, c2);
    c3.showDetails();

    return 0;
}