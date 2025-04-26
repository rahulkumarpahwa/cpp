#include <iostream>
using namespace std;

class Employee
{
public:
    int id; // we need to make the variable public otherwise they can't be inherited.
    float salary;

    Employee() // base class constructor automatiaclly calls it.
    {
    }
    Employee(int a)
    {
        id = a;
        salary = 34000;
    }
};

class Programmer : public Employee
{
public:
    int languageCode = 9;
    Programmer(int i) : Employee(i)
    {
    }
};

int main()
{
    Employee harry(1), apple(2);
    cout << harry.salary << endl;
    cout << apple.salary << endl;
    Programmer striver(999999);
    cout << striver.salary << endl;

    return 0;
}