#include <iostream>
using namespace std;

class Student
{
protected:
    int rollno;

public:
    void setNumber(int rollno)
    {
        this->rollno = rollno;
    }
    void printNumber()
    {
        cout << "roll nos is " << this->rollno << endl;
    }
};

class Test : public virtual Student
{
protected:
    float maths, physics;

public:
    void setMarks(float m1, float m2)
    {
        this->maths = m1;
        this->physics = m2;
    }

    void printMarks()
    {
        cout << "maths marks " << this->maths << endl;
        cout << "physics marks " << this->physics << endl;
    }
};

class Sports : public virtual Student
{

protected:
    float score;

public:
    void setScore(float sc)
    {
        this->score = sc;
    }

    void printScore()
    {
        cout << "Score are :" << this->score << endl;
    }
};

class Result : public Sports, public Test
{

private:
    float total;

public:
    void setTotal()
    {
        this->total = this->maths + this->physics + this->score;
    }

    void display()
    {
        cout << "the roll no of the student is " << this->rollno << endl;
        cout << "the total marks of the student is " << this->total << endl;
        printNumber();
        printMarks();
        printScore();
        
    }
};

int main()
{

    Result r;
    r.setNumber(1111);
    r.setMarks(99, 98);
    r.setScore(99.00f);
    r.setTotal();
    r.display();
    return 0;
}