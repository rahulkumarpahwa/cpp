#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setDetails(void)
    {
        cout << "Enter the id of the employee " << "\n";
        cin >> id;
        cout << "Enter the salary of the employee " << "\n";
        cin >> salary;
    }

    void displayDetails(void)
    {
        cout << "The Employee details are " << id << " id " << salary << "salary " << "\n";
    }
};

int main()
{
    Employee e[20];
    int size = sizeof(e) / sizeof(Employee);
    for (int i = 0; i < size; i++)
    {
        e[i].setDetails();
    }

    for (int i = 0; i < size; i++)
    {
        e[i].displayDetails();
    }

    return 0;
}