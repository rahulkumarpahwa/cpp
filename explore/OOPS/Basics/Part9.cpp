// More on friend function.



#include <iostream>
using namespace std;

class Y; //forward declaration because Y here in the friend fxn declaration can't be accessible before it is actually defined as a class. 

class X
{
    int data;

    friend void add(X, Y); // making friend with X class

public:
    void setValue(int value)
    {
        data = value;
    }
};

class Y
{
    int num;

    friend void add(X, Y); // making friend with Y class

public:
    void setValue(int value)
    {
        num = value;
    }
};

void add(X o1, Y o2)
{
    cout <<"summing data of the objs of X and Y  "<< o1.data + o2.num << endl;
}
 
int main()
{

    X o1;
    Y o2;
    o1.setValue(2);
    o2.setValue(4);
    add(o1, o2);

    return 0;
}