// C. BankAccount-SavingsAccount
#include <iostream>
#include <string>

class BankAccount
{
protected:
    std::string accountNumber;
    double balance;

public:
    BankAccount(std::string accountNumber, double initialBalance) : accountNumber(accountNumber), balance(initialBalance) {}

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            std::cout << "Deposit successful. New balance: " << balance << std::endl;
        }
        else
        {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            std::cout << "Withdrawal successful. New balance: " << balance << std::endl;
        }
        else
        {
            std::cout << "Insufficient funds or invalid amount." << std::endl;
        }
    }

    double getBalance() const
    {
        return balance;
    }

    void displayDetails() const
    {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

class SavingsAccount : public BankAccount
{
private:
    double interestRate;

public:
    SavingsAccount(std::string accountNumber, double initialBalance, double interestRate)
        : BankAccount(accountNumber, initialBalance), interestRate(interestRate) {}

    double calculateInterest() const
    {
        return getBalance() * interestRate;
    }

    void displayDetails() const
    {
        BankAccount::displayDetails();
        std::cout << "Interest Rate: " << interestRate << std::endl;
        std::cout << "Calculated Interest: " << calculateInterest() << std::endl;
    }
};

int main()
{
    SavingsAccount savings("123456789", 1000.0, 0.05);
    savings.displayDetails();
    savings.deposit(500.0);
    savings.withdraw(200.0);
    std::cout << "Final Balance: " << savings.getBalance() << std::endl;
    return 0;
}
