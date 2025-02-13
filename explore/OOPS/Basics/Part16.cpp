// dynamic initialisation of objects

// constructor will dynamically initialised in this lecture.
//

#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int year;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {} // when we didn't pass any argument the still the oject can be created with this one. without it bd3 can't be made.
    BankDeposit(int p, int y, float r); // r can be value like 0.04 ie. in percentage with decimal.
    BankDeposit(int p, int y, int r);   // r can be value like 4 ie. in percentage simply.
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate); // compound interest formula
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestRate = (float)r / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate); // compound interest formula
    }
}

void BankDeposit ::show()
{
    cout << "Principal Amount is " << principal << endl;
    cout << "Return Value after " << year << " is " << returnValue << endl;
}

int main()
{

    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the principal, year and the rate of interest(in decimal)" << "\n";
    cin >> p >> y >> r;

    bd1 = BankDeposit(p, y, r); // explicit constructor calling.
    bd1.show();

    cout << "Enter the principal, year and the rate of interest(in integer)" << "\n";
    cin >> p >> y >> R;

    bd2 = BankDeposit(p, y, R); // explicit constructor calling.
    bd2.show();

    bd3.show(); // garbage value shown.

    return 0;
}