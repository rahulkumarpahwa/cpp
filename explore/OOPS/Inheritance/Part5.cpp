// Multi level Inheritance: one class derived from one class then other class derived from the this derived class.

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void get_rollno()
    {
        cout << roll_no << endl;
    }

    void set_rollno(int r)
    {

        roll_no = r;
    }
};

class Exam : public Student
{

protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks(void)
    {
        cout << "Maths: " << maths << "\n";
        cout << "Physics: " << physics << "\n";
    }
};

class Result : public Exam
{
    float percentage;

public:
    void Display(); // declaration
};

void Result ::Display()
{

    get_rollno();
    get_marks();
    percentage = (maths + physics) / 2; // we can access the protected properties of the exam here because it is protected member of the class
    cout << "Percentage: " << percentage << "\n";
}

int main()
{
    Result r;
    r.set_rollno(1);
    r.set_marks(75, 85);
    r.Display();

    return 0;
}

/*
Notes:
If we are inheriting B from A and C from B: [ A--->B--->C] then:
1. A is the base class for B and B is the base class for C
2. A-->B-->C is called Inheritance Path.
*/