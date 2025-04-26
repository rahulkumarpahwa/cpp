#include <iostream>
#include <cmath>
using namespace std;

int square(int x)
{
    return x * x;
}

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }

    Complex(int, int);

    void display()
    {
        cout << "Complex Number is " << a << " + i" << b << endl;
    }
};

Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
}

class Point
{
    int x, y;

    friend int distance(Point, Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
};

int distance(Point X, Point Y)
{
    return sqrt(square(Y.y - X.y) + square(Y.x - X.x));
}

int main()
{

    Complex c(2, 3); // implicit call to constructor

    Complex c2 = Complex(34, 44); // explicit call

    c.display();
    c2.display();

    Point x(0, 1);
    Point y(0, 6);

    cout << "distance between is " << distance(x, y) << "\n";

    return 0;
}