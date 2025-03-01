// B. Person-Student/Teacher-TeachingAssistant
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

class Student : virtual public Person
{
protected:
    int studentID;

public:
    Student(std::string name, int age, int studentID) : Person(name, age), studentID(studentID) {}

    void displayStudentDetails() const
    {
        displayPersonDetails();
        std::cout << "Student ID: " << studentID << std::endl;
    }
};

class Teacher : virtual public Person
{
protected:
    std::string subject;

public:
    Teacher(std::string name, int age, std::string subject) : Person(name, age), subject(subject) {}

    void displayTeacherDetails() const
    {
        displayPersonDetails();
        std::cout << "Subject: " << subject << std::endl;
    }
};

class TeachingAssistant : public Student, public Teacher
{
private:
    std::string labSection;

public:
    TeachingAssistant(std::string name, int age, int studentID, std::string subject, std::string labSection)
        : Person(name, age), Student(name, age, studentID), Teacher(name, age, subject), labSection(labSection) {}

    void displayDetails() const
    {
        displayStudentDetails();
        displayTeacherDetails();
        std::cout << "Lab Section: " << labSection << std::endl;
    }
};

int main()
{
    TeachingAssistant ta("Eve", 28, 98765, "Physics", "Lab A");
    ta.displayDetails();
    return 0;
}
