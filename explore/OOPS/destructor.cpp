#include <iostream>
using namespace std;

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


    // destructor
    ~Student(){
        cout << "Hi! I am Destructor!";
        delete cgpaPtr; // deleting dynamic memory.
    }

    void getInfo()
    {
        cout << this->name << endl;
        cout << *cgpaPtr << endl;
    }
};

int main(){
    Student s1("Apple", 9.8);
    s1.getInfo();

    return 0; 
}