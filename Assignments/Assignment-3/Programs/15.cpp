// 10. Abstract Class with Multiple Derived Classes
#include <iostream>

class Employee
{
public:
    virtual double calculateSalary() = 0;
};

class FullTimeEmployee : public Employee
{
private:
    double monthlySalary;

public:
    FullTimeEmployee(double monthlySalary) : monthlySalary(monthlySalary) {}

    double calculateSalary() override
    {
        return monthlySalary;
    }
};

class PartTimeEmployee : public Employee
{
private:
    double hourlyWage;
    int hoursWorked;

public:
    PartTimeEmployee(double hourlyWage, int hoursWorked) : hourlyWage(hourlyWage), hoursWorked(hoursWorked) {}

    double calculateSalary() override
    {
        return hourlyWage * hoursWorked;
    }
};

int main()
{
    Employee *employee1 = new FullTimeEmployee(5000.0);
    Employee *employee2 = new PartTimeEmployee(25.0, 20);

    std::cout << "Full Time Employee Salary: " << employee1->calculateSalary() << std::endl;
    std::cout << "Part Time Employee Salary: " << employee2->calculateSalary() << std::endl;

    delete employee1;
    delete employee2;

    return 0;
}
