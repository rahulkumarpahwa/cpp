#include <iostream>
#include <string>
using namespace std;

class Teacher
{

private:
    double salary;

public:
    // constructor:
    Teacher() // non-parametrized
    {
        cout << "Hi! this is the constructor!";
        dept = "computer science";
    }

    Teacher(string name, string dept, string subject, double salary) // parametrized
    {
        this->name = name;
        (*this).dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // copy constructor
    Teacher(Teacher &obj) // here we pass original object by reference
    {
        cout << "I am custom copy constructor." << endl;
        this->name = obj.name;
        (*this).dept = obj.dept;
        this->subject = obj.subject;
        this->salary = obj.salary;
    }

    // properties / attributes
    string name;
    string dept;
    string subject;

    // methods / member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // setter:
    void setSalary(int s)
    {
        salary = s;
    }

    // getter:
    double getSalary()
    {
        return salary;
    }

    void getInfo()
    {
        cout << name << endl;
        cout << subject << endl;
        cout << this->dept << endl;
        cout << salary << endl;
        cout << "\n";
    }
};

class Student
{
public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        this->cgpaPtr = new double; // dynamic memory allocation
        *cgpaPtr = cgpa;
    }

    // custom constructor: (deep copy)
    Student(Student &obj)
    {
        this->name = obj.name;
        this->cgpaPtr = new double;
        *cgpaPtr = *(obj.cgpaPtr);
    }

    void getInfo()
    {
        cout << this->name << endl;
        cout << *cgpaPtr << endl;
    }
};

int main()
{

    Teacher t1("joker", "dcsa", "AI", 12000.00);

    t1.getInfo();

    Teacher t2;
    t2.getInfo();

    Teacher t3(t1); // passing the reference of the another object. (default copy constructor)
    t3.getInfo();

    Student s1("rahul", 8.9);
    s1.getInfo();

    Student s2(s1);
    s2.getInfo();

    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();

    s2.name = "apple";
    s2.getInfo();

    return 0;
}