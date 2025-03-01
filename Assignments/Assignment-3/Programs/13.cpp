// 8. Dynamic Method Dispatch Using Virtual Functions
#include <iostream>

class BankAccount
{
public:
    virtual double calculateInterest()
    {
        return 0.0;
    }
};

class SavingsAccount : public BankAccount
{
private:
    double balance;
    double interestRate;

public:
    SavingsAccount(double balance, double interestRate) : balance(balance), interestRate(interestRate) {}

    double calculateInterest() override
    {
        return balance * interestRate;
    }
};

class CurrentAccount : public BankAccount
{
public:
    double calculateInterest() override
    {
        return 0.0;
    }
};

int main()
{
    BankAccount *account1 = new SavingsAccount(1000.0, 0.05);
    BankAccount *account2 = new CurrentAccount();

    std::cout << "Savings Account Interest: " << account1->calculateInterest() << std::endl;
    std::cout << "Current Account Interest: " << account2->calculateInterest() << std::endl;

    delete account1;
    delete account2;

    return 0;
}
