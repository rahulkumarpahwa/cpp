// 14. Exception Handling in Constructors
#include <iostream>
#include <stdexcept>
#include <string>

class BankAccount
{
private:
    std::string accountNumber;
    double balance;

public:
    BankAccount(std::string accountNumber, double initialBalance) : accountNumber(accountNumber)
    {
        if (initialBalance < 0)
        {
            throw std::invalid_argument("Initial balance cannot be negative.");
        }
        balance = initialBalance;
    }

    void displayDetails() const
    {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main()
{
    try
    {
        BankAccount account("12345", -100.0);
        account.displayDetails();
    }
    catch (const std::invalid_argument &error)
    {
        std::cerr << "Error: " << error.what() << std::endl;
    }

    try
    {
        BankAccount account("67890", 500.0);
        account.displayDetails();
    }
    catch (const std::invalid_argument &error)
    {
        std::cerr << "Error: " << error.what() << std::endl;
    }
    return 0;
}
