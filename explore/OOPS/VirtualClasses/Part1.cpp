// virtual Base class introduction

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void setNumber(int a)
    {
        roll_no = a;
    }
    void printNumber(void)
    {
        cout << "Your roll no is : " << roll_no << endl;
    }
};

class Test : virtual public Student
// Here, Test and Sports are both virtual base classes of Student.
{
protected:
    float maths, physics;

public:
    void setMarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void printMarks(void)
    {
        cout << "Your marks in Maths are: " << maths << endl;
        cout << "Your marks in Physics are: " << physics << endl;
    }
};

class Sports : virtual public Student // write "virtual public" or "public virtual"  it is same thing.
// Here, Test and Sports are both virtual base classes of Student.
{
protected:
    float score;

public:
    void setScores(float c1)
    {
        score = c1;
    }
    void printScores(void)
    {
        cout << "Your scores are: " << score << endl;
    }
};

class Result : public Test, public Sports // simple inheritance
{
protected:
    float total;

public:
    void display(void)
    {

        total = maths + physics + score;

        printNumber();
        printMarks();
        printScores();
        cout << "Total marks are: " << total << endl;
    }
};

int main()
{

    Result r1;
    r1.setNumber(1);
    r1.setScores(100);
    r1.setMarks(100.0, 100.0);
    r1.display();
    return 0;
}

/*
Summary:
base class --> derived class ----------------------------------------------------------------
student --> test
student --> sports
test --> result
sports --> result
*/

// note :
// 1. if we don't write the virtual and then call the setnumber() fxn then it will cause an error will the result class object as the compiler will be ambiguous about what to call the setnumber() fxn from either from the sports class or the test class. 
// so basically when we inherited from hybrid class make sure to make the class the virtual so as only one copy of the members is passed further to the inherited class.