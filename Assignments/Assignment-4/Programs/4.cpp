// 4. Exception Handling in Constructors (Student)
#include <iostream>
#include <stdexcept>
#include <string>

class Student
{
private:
    std::string name;
    int marks;

public:
    Student(std::string name, int marks) : name(name)
    {
        if (marks < 0 || marks > 100)
        {
            throw std::out_of_range("Marks are invalid!");
        }
        this->marks = marks;
    }

    void displayDetails() const
    {
        std::cout << "Name: " << name << ", Marks: " << marks << std::endl;
    }
};

int main()
{
    try
    {
        Student student1("Alice", 110);
        student1.displayDetails();
    }
    catch (const std::out_of_range &error)
    {
        std::cerr << "Error: " << error.what() << std::endl;
    }

    try
    {
        Student student2("Bob", 85);
        student2.displayDetails();
    }
    catch (const std::out_of_range &error)
    {
        std::cerr << "Error: " << error.what() << std::endl;
    }

    return 0;
}
