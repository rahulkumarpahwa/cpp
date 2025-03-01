// 8. Operator Overloading(== Operator)(Point)
#include <iostream>

class Point
{
public:
    int x, y;

    Point(int x = 0, int y = 0) : x(x), y(y) {}

    bool operator==(const Point &other) const
    {
        return (x == other.x) && (y == other.y);
    }
};

int main()
{
    Point p1(1, 2);
    Point p2(1, 2);
    Point p3(3, 4);

    if (p1 == p2)
    {
        std::cout << "p1 and p2 are equal" << std::endl;
    }
    else
    {
        std::cout << "p1 and p2 are not equal" << std::endl;
    }

    if (p1 == p3)
    {
        std::cout << "p1 and p3 are equal" << std::endl;
    }
    else
    {
        std::cout << "p1 and p3 are not equal" << std::endl;
    }

    return 0;
}
