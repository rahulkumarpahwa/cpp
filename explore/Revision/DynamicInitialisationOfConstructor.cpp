#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit()
    {
    }
    BankDeposit(int p, int y, int r);   // r here be like 0.04
    BankDeposit(int p, int y, float r); // in percentage like 4%

    float display()
    {
        return returnValue;
    }
};

BankDeposit ::BankDeposit(int p, int y, int r)
{

    principal = p;
    years = y;
    interestRate = float(r) / 100; // first convert to float to get the floating point value.
    returnValue = p;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate); // compound interest
    }
}

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = p;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate); // compound interest
    }
}

int main()
{
    BankDeposit b(100, 2, 0.04f);
    BankDeposit b2(100, 1, 4);

    cout << b.display() << endl;
    cout << b2.display() << endl;

    return 0;
}