#include <iostream>
using namespace std;

class Employee
{
    int id;

public:
    static int count;

public:
    void setData()
    {
        count++;
        cout << "Enter the id" << "\n";
        cin >> id;
    }

    void getData()
    {
        cout << "the id of the employee is " << id << "\n";
    }

    static void getCount() // static functions can access only static members and static functions
    {
        cout << "The value of the count is " << count << "\n";
    }
};

int Employee ::count; // default value is zero, you can define a value here.

int main()
{
    Employee e, e1, e2;
    e.setData();
    e.getData();

    e1.setData();
    e1.getData();

    e2.setData();
    e2.getData();

    cout << "The no. of Employees is " << Employee::count << "\n";
    Employee::getCount();

    return 0;
}

// we will create a static method which can access all the static members and methods.