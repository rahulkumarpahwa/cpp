// B. Employee-Person-Manager
#include <iostream>
#include <string>

class Person
{
protected:
    std::string name;
    int age;

public:
    Person(std::string name, int age) : name(name), age(age) {}

    void displayPersonDetails() const
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Employee
{
protected:
    int employeeID;
    double salary;

public:
    Employee(int employeeID, double salary) : employeeID(employeeID), salary(salary) {}

    void displayEmployeeDetails() const
    {
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }
};

class Manager : public Person, public Employee
{
private:
    std::string department;

public:
    Manager(std::string name, int age, int employeeID, double salary, std::string department)
        : Person(name, age), Employee(employeeID, salary), department(department) {}

    void displayDetails() const
    {
        displayPersonDetails();
        displayEmployeeDetails();
        std::cout << "Department: " << department << std::endl;
    }
};

int main()
{
    Manager manager("David", 40, 112233, 75000.0, "Sales");
    manager.displayDetails();
    return 0;
}
