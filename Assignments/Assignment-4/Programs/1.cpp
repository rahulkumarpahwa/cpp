// Section 1: Exception Handling
// 1. Basic Exception Handling (Division)
#include <iostream>
#include <stdexcept>

double divide(int a, int b)
{
    if (b == 0)
    {
        throw std::runtime_error("Division by zero!");
    }
    return static_cast<double>(a) / b;
}

int main()
{
    int num1, num2;

    std::cout << "Enter two integers: ";
    if (!(std::cin >> num1 >> num2))
    {
        std::cout << "Invalid input. Please enter integers only." << std::endl;
        return 1;
    }

    try
    {
        double result = divide(num1, num2);
        std::cout << "Result of division: " << result << std::endl;
    }
    catch (const std::runtime_error &error)
    {
        std::cerr << "Error: " << error.what() << std::endl;
    }

    return 0;
}
