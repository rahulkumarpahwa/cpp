// 5. Friend Function (Rectangle)
#include <iostream>

class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle(int length = 0, int width = 0) : length(length), width(width) {}

    friend int calculateArea(const Rectangle &rect);
};

int calculateArea(const Rectangle &rect)
{
    return rect.length * rect.width;
}

int main()
{
    Rectangle rect(5, 10);
    int area = calculateArea(rect);
    std::cout << "Area: " << area << std::endl;

    return 0;
}
