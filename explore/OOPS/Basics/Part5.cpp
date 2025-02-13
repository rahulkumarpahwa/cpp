// Array of objects

#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 100; // setting the default value of the salary.
        cout << "Enter ID of Employee" << "\n";
        cin >> id;
    }
    void getId(void)
    {
        cout << "Your id is " << id << endl;
        cout << "Your salary is " << salary << endl;
    }
};

int main()
{

    Employee e1, e2, e3, e4;
    // normal way of creating the object.
    // e1.setId();
    // e1.getId();

    // the other way of creating the object is by creating an array.
    Employee e[10];
    // this will create 10 employee objects.
    // now to access these we will, use the index of the each.
    // e[0].setId();
    // e[0].getId();


    // even we can you for loop to do that as well
    for (int i = 0; i < 4 ; i++)
    {
        e[i].setId();
        e[i].getId();
    }
    

    return 0;
}