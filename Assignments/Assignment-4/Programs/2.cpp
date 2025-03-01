// 2. Custom Exception Handling (Age Exception)
#include <iostream>
#include <stdexcept>
#include <string>

class AgeException : public std::exception
{
public:
    const char *what() const noexcept override
    {
        return "Age is less than 18!";
    }
};

int main()
{
    int age;

    std::cout << "Enter your age: ";
    if (!(std::cin >> age))
    {
        std::cout << "Invalid input. Please enter a number." << std::endl;
        return 1;
    }

    try
    {
        if (age < 18)
        {
            throw AgeException();
        }
        std::cout << "You are eligible." << std::endl;
    }
    catch (const AgeException &error)
    {
        std::cerr << "Error: " << error.what() << std::endl;
    }

    return 0;
}
