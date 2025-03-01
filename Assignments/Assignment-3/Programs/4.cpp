// 2. Multilevel Inheritance
//  A. Person-Student-GraduateStudent
#include <iostream>
#include <string>

class Person
{
protected:
    std::string name;
    int age;

public:
    Person(std::string name, int age) : name(name), age(age) {}

    void displayDetails() const
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Student : public Person
{
protected:
    int rollNumber;
    std::string course;

public:
    Student(std::string name, int age, int rollNumber, std::string course) : Person(name, age), rollNumber(rollNumber), course(course) {}

    void displayDetails() const
    {
        Person::displayDetails();
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Course: " << course << std::endl;
    }
};

class GraduateStudent : public Student
{
private:
    std::string thesisTitle;

public:
    GraduateStudent(std::string name, int age, int rollNumber, std::string course, std::string thesisTitle)
        : Student(name, age, rollNumber, course), thesisTitle(thesisTitle) {}

    void displayDetails() const
    {
        Student::displayDetails();
        std::cout << "Thesis Title: " << thesisTitle << std::endl;
    }
};

int main()
{
    GraduateStudent gradStudent("Charlie", 25, 54321, "Computer Science", "Advanced Algorithms");
    gradStudent.displayDetails();
    return 0;
}
