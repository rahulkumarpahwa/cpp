// 3. Multiple Catch Blocks (Number Type)
#include <iostream>
#include <stdexcept>

int main()
{
    int num;

    std::cout << "Enter an integer: ";
    if (!(std::cin >> num))
    {
        std::cout << "Invalid input. Please enter a number." << std::endl;
        return 1;
    }

    try
    {
        if (num < 0)
        {
            throw std::invalid_argument("Number is negative!");
        }
        else if (num == 0)
        {
            throw std::runtime_error("Number is zero!");
        }
        else
        {
            std::cout << "Number is positive: " << num << std::endl;
        }
    }
    catch (const std::invalid_argument &error)
    {
        std::cerr << "Error: " << error.what() << std::endl;
    }
    catch (const std::runtime_error &error)
    {
        std::cerr << "Error: " << error.what() << std::endl;
    }
    catch (...)
    {
        std::cerr << "Unknown exception caught!" << std::endl;
    }

    return 0;
}
