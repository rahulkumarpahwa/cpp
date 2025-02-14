// Inheritance-Basics

#include <iostream>
using namespace std;

class Employee
{ // base class
    string name;
    float salary;

public:
    int id;
    Employee(int inputId, string inputName)
    {
        name = inputName;
        id = inputId;
        salary = 34.0f;
    }

    Employee()
    { // default constructor
    }

    void display()
    {
        cout << name << endl;
        cout << id << "\n";
        cout << salary << "\n";
    }
};

// derived class
/* syntax: class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
// derived class definition
}
 */

/*
Notes:
1. default visibility mode is private.
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class.
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class.
4. Private members of the base class can't be inherited in derived class.
*/

class Programmer : Employee // when we don't write visibility, then it is automatically private.
{
public:
    string language;

    Programmer(int inputId)
    {
        id = inputId; // make the id public in employee otherwise it is not accessible.
        language = "c++";
    }

    void display()
    {
        cout << id << endl;
        cout << language << endl;
    }
};

int main()
{
    Employee Harry(101, "Harry");
    Harry.display();

    Programmer p(23);
    p.display();

    // cout << p.id << endl; // can't access it as we have inherited the class privately.
    // when we define the visiblity to public then we can access the public member od the class and the class from whom it has inherited.
    return 0;
}