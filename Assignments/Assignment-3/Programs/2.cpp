// B. Person-Student-Teacher
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
private:
    int studentID;
    std::string course;

public:
    Student(std::string name, int age, int studentID, std::string course) : Person(name, age), studentID(studentID), course(course) {}

    void displayDetails() const
    {
        Person::displayDetails();
        std::cout << "StudentID: " << studentID << std::endl;
        std::cout << "Course: " << course << std::endl;
    }
};

class Teacher : public Person
{
private:
    int teacherID;
    std::string subject;

public:
    Teacher(std::string name, int age, int teacherID, std::string subject) : Person(name, age), teacherID(teacherID), subject(subject) {}

    void displayDetails() const
    {
        Person::displayDetails();
        std::cout << "TeacherID: " << teacherID << std::endl;
        std::cout << "Subject: " << subject << std::endl;
    }
};

int main()
{
    Student student("Alice", 20, 12345, "Computer Science");
    Teacher teacher("Bob", 35, 67890, "Mathematics");

    student.displayDetails();
    std::cout << std::endl;
    teacher.displayDetails();

    return 0;
}
