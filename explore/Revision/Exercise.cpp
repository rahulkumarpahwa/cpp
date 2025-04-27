#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{

protected:
    int x;
    int y;

public:
    SimpleCalculator(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void sum()
    {
        cout << "sum is " << x + y << endl;
    }

    void sub()
    {
        cout << "sub is " << x - y << endl;
    }

    void mul()
    {
        cout << "mul is " << x * y << endl;
    }

    void div()
    {
        cout << "div is " << x / y << endl;
    }
};

class ScientificCalculator
{
protected:
    int x;
    int y;

public:
    ScientificCalculator(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void calSqrt()
    {
        cout << "sqrt is " << sqrt(x) << endl;
    }

    void oneByY()
    {
        cout << "one by y is " << 1 / y << endl;
    }

    void calcSquare()
    {
        cout << "square is " << x * x << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    HybridCalculator(int x, int y) : SimpleCalculator(x, y), ScientificCalculator(x, y)
    {
    }
};

int main()
{
    HybridCalculator h(24, 22);
    h.sum();
    h.sub();
    h.mul();
    h.div();
    h.calSqrt();
    h.calcSquare();
    h.oneByY();

    return 0;
}