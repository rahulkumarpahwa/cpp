#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    Person()
    {
        cout << "The Parent constructor " << endl;
    }

    ~Person()
    {
        cout << "The Parent destructor" << endl;
    }
};

class Student : public Person
{
public:
    Student(string name, int age, int rollno) : Person(name, age)
    {
        this->rollno = rollno;
        cout << "The child constructor" << endl;
    }

    ~Student()
    {
        cout << "The child destructor" << endl;
    }

    int rollno;
    void getInfo()
    {
        cout << "name " << name << endl;
        cout << "age " << age << endl;
        cout << "rollno. " << rollno << endl;
    }
};

int main()
{

    Student s1("Apple", 25, 85);
    s1.getInfo();

    return 0;
}