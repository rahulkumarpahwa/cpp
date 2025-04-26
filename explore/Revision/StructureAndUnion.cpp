#include <iostream>
#include <string.h>
using namespace std;

struct Employee
{
    int id;
    int age;
    int salary;
};

union student
{
    int id;
    int salary;
    int age;
};

int main()
{
    struct Employee e1;
    e1.id = 45;
    e1.age = 45;
    e1.salary = 4500000;

    cout << e1.salary << "\n";
    cout << e1.age << "\n";

    // union
    cout << "union: " << "\n";
    union student e2;
    e2.age = 89;
    e2.id = 0000;
    e2.salary = 9999999;
    cout<<e2.salary<<"\n";
    cout<<e2.age<<"\n";

    return 0;
}