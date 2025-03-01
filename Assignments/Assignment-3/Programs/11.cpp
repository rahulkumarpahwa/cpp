// Section 2: Dynamic Polymorphism and Virtual Functions
// 6. Virtual Function for Method Overriding
#include <iostream>

class Shape
{
public:
    virtual double area()
    {
        return 0.0;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    double area() override
    {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double breadth;

public:
    Rectangle(double length, double breadth) : length(length), breadth(breadth) {}

    double area() override
    {
        return length * breadth;
    }
};

int main()
{
    Shape *shape1 = new Circle(5.0);
    Shape *shape2 = new Rectangle(4.0, 6.0);

    std::cout << "Area of Circle: " << shape1->area() << std::endl;
    std::cout << "Area of Rectangle: " << shape2->area() << std::endl;

    delete shape1;
    delete shape2;

    return 0;
}
