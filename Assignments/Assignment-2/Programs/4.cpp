// 4. Function Overloading (MathOperations)
#include <iostream>
#include <string>

class MathOperations
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }

    std::string add(std::string a, std::string b)
    {
        return a + b;
    }
};

int main()
{
    MathOperations math;

    std::cout << "Sum of integers: " << math.add(5, 10) << std::endl;
    std::cout << "Sum of doubles: " << math.add(5.5, 3.2) << std::endl;
    std::cout << "Concatenation of strings: " << math.add("Hello, ", "World!") << std::endl;

    return 0;
}
