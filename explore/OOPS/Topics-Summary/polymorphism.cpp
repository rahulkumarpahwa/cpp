#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    Student()
    {
        cout << " non-parametrized";
    }

    Student(string name)
    {
        this->name = name;
        cout << "parametrized";
    }
};

int main()
{
    Student s1;
    Student s2("apple");

    return 0;
}