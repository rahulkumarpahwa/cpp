// 13. Exception Handling in Class Methods
#include <iostream>
#include <stdexcept>
#include <string>

class Student
{
private:
    std::string name;
    int marks;

public:
    Student(std::string name) : name(name), marks(0) {}

    void setMarks(int m)
    {
        if (m < 0 || m > 100)
        {
            throw std::out_of_range("Marks must be between 0 and 100.");
        }
        marks = m;
    }

    void displayDetails() const
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }
};

int main()
{
    Student student("Rahul");

    try
    {
        student.setMarks(105);
        student.displayDetails();
    }
    catch (const std::out_of_range &error)
    {
        std::cerr << "Error: " << error.what() << std::endl;
    }

    try
    {
        student.setMarks(85);
        student.displayDetails();
    }
    catch (const std::out_of_range &error)
    {
        std::cerr << "Error: " << error.what() << std::endl;
    }
    return 0;
}
