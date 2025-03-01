// Section 3: Exception Handling
// 11. Exception Handling : Division by Zero
#include <iostream>

double divide(int a, int b)
{
    if (b == 0)
    {
        throw std::runtime_error("Division by zero is not allowed.");
    }
    return static_cast<double>(a) / b;
}

int main()
{
    int x, y;
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;

    try
    {
        double result = divide(x, y);
        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::runtime_error &error)
    {
        std::cerr << "Error: " << error.what() << std::endl;
    }

    return 0;
}
