#include <iostream>
using namespace std;

class Student
{
protected:
    int rollno;

public:
    void setRollno(int r)
    {
        rollno = r;
    }
    void getRollno(void)
    {
        cout << "the Roll no is " << rollno << endl;
    }
};

class Exam : public Student
{
protected:
    float physics;
    float maths;

public:
    void setMarks(float p, float m)
    {
        physics = p;
        maths = m;
    }
    void getMarks();
};

void Exam ::getMarks()
{
    cout << "The marks in physics and maths is " << physics << "  + " << maths << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        getRollno();
        getMarks();
        (*this).percentage = (physics + maths) / 2;
        cout << "the percentage of the marks is " << percentage << endl;
    }
};

int main()
{
    Result r;
    r.setRollno(88);
    r.setMarks(98, 88);
    r.display();

    return 0;
}