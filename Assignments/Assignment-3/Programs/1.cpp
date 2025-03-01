// 1. Single Inheritance
// A. Employee-Manager
#include <iostream>
#include <string>

class Employee
{
protected:
    std::string name;
    int id;
    double salary;

public:
    Employee(std::string name, int id, double salary) : name(name), id(id), salary(salary) {}

    void displayDetails() const
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "ID: " << id << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }

    double getSalary() const
    {
        return salary;
    }
};

class Manager : public Employee
{
private:
    double bonus;

public:
    Manager(std::string name, int id, double salary, double bonus) : Employee(name, id, salary), bonus(bonus) {}

    double calculateTotalSalary() const
    {
        return getSalary() + bonus;
    }

    void displayDetails() const
    {
        Employee::displayDetails();
        std::cout << "Bonus: " << bonus << std::endl;
        std::cout << "Total Salary: " << calculateTotalSalary() << std::endl;
    }
};

int main()
{
    Manager manager("Rahul Kumar", 101, 60000.0, 15000.0);
    manager.displayDetails();
    return 0;
}
