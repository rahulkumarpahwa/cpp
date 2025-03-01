// 12. Exception Handling with Multiple Catch Blocks
#include <iostream>
#include <stdexcept>

int main()
{
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    try
    {
        if (num < 0)
        {
            throw std::invalid_argument("Negative number is not allowed.");
        }
        else if (num == 0)
        {
            throw std::logic_error("Zero is not allowed.");
        }
        else if (num > 1000)
        {
            throw std::out_of_range("Number is too large ( > 1000).");
        }
        else
        {
            std::cout << "Valid number: " << num << std::endl;
        }
    }
    catch (const std::invalid_argument &error)
    {
        std::cerr << "Invalid Argument Error: " << error.what() << std::endl;
    }
    catch (const std::logic_error &error)
    {
        std::cerr << "Logic Error: " << error.what() << std::endl;
    }
    catch (const std::out_of_range &error)
    {
        std::cerr << "Out of Range Error: " << error.what() << std::endl;
    }
    catch (...)
    {
        std::cerr << "Unknown exception caught!" << std::endl;
    }

    return 0;
}
