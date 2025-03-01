// 1. Understanding Classes and Objects (Student)
#include <iostream>
#include <string>

class Student
{
public:
    std::string name;
    int age;
    char grade;

    void displayDetails() const
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Grade: " << grade << std::endl;
    }
};

int main()
{
    Student student1;
    student1.name = "Alice";
    student1.age = 20;
    student1.grade = 'A';

    student1.displayDetails();

    return 0;
}
