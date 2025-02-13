// another example of the constructor

// question : create a fxn which takes 2 point objects and computes the distance between them.
#include <iostream>
#include <math.h>
using namespace std;

class Coordinates
{
    int x;
    int y;

    friend double distance(Coordinates c, Coordinates d); // friend declaration

public:
    Coordinates(int a, int b); // declaration

    void displayPoint()
    {
        cout << "The coordinates of the point are (" << x << "," << y << ")" << "\n";
    }

    double DistanceFormula(Coordinates obj1, Coordinates obj2) // why this working? In C++, a member function of a class can access private members of any object of the same class. The restriction on private members applies only to outside functions, not to functions inside the same class.
    {
        return sqrt(pow((obj2.y - obj1.y), 2) + pow((obj2.x - obj1.x), 2));
    }
};

double distance(Coordinates c, Coordinates d)
{
    return sqrt(pow((d.y - c.y), 2) + pow((d.x - c.x), 2));
}

Coordinates::Coordinates(int a, int b)
{
    x = a;
    y = b;
}

int main()
{
    Coordinates c(2, 3);
    Coordinates p(4, 6);
    c.displayPoint();
    p.displayPoint();

    cout << "the distance between the obj c and p is " << c.DistanceFormula(c, p) << endl;
    cout << "the distance between the obj c and p is " << distance(c, p) << endl;

    return 0;
}

/*
NOTE :
How Can One Object Access Another Object's Private Members?
Your confusion comes from the assumption that one object should not be able to access another object's private members. This is generally true for external functions, but not for member functions of the same class.

🚀 Key Rule in C++:
➡ A member function of a class can access the private members of any object of the same class.
➡ This is because all objects of a class share the same definition of member functions, and member functions have full access to all instances of the class.
*/