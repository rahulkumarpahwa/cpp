// 15. User-Defined Exception Class
#include <iostream>
#include <stdexcept>
#include <string>

class InvalidAgeException : public std::exception
{
public:
    const char *what() const noexcept override
    {
        return "Invalid Age: Age must be 18 or older.";
    }
};

void checkAge(int age)
{
    if (age < 18)
    {
        throw InvalidAgeException();
    }
    std::cout << "Age is valid." << std::endl;
}

int main()
{
    try
    {
        checkAge(15);
    }
    catch (const InvalidAgeException &error)
    {
        std::cerr << "Error: " << error.what() << std::endl;
    }

    try
    {
        checkAge(25);
    }
    catch (const InvalidAgeException &error)
    {
        std::cerr << "Error: " << error.what() << std::endl;
    }
    return 0;
}
