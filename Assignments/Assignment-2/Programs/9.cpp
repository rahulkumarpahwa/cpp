// 9. Overloading Unary ++ Operator (Counter)
#include <iostream>

class Counter
{
private:
    int value;

public:
    Counter(int value = 0) : value(value) {}

    // Pre-increment
    Counter &operator++()
    {
        ++value;
        return *this;
    }

    // Post-increment
    Counter operator++(int)
    {
        Counter temp = *this;
        ++value;
        return temp;
    }

    int getValue() const
    {
        return value;
    }
};

int main()
{
    Counter c1(5);

    std::cout << "Initial value: " << c1.getValue() << std::endl;

    Counter c2 = c1++; // Post-increment
    std::cout << "Post-increment value of c1: " << c1.getValue() << std::endl;
    std::cout << "Value of c2 (post-increment): " << c2.getValue() << std::endl;

    Counter c3 = ++c1; // Pre-increment
    std::cout << "Pre-increment value of c1: " << c1.getValue() << std::endl;
    std::cout << "Value of c3 (pre-increment): " << c3.getValue() << std::endl;

    return 0;
}
