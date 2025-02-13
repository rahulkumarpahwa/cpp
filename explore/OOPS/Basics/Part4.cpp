// Static Data Members and methods.
// static variable will remain same even if we create multiple objects of the class.
// eg.  we want to count the total no. of the employee object created from the class, then in such case we will use the static variable to do that.

// when we make the variable static, then each object does not have the own count variable but they share the count variable.
// while if the count variable is not static then the each object will create its own static variable.
// also the static variable are also called as class variable in oops.


// --- static member fxn----
// static function is the one which is used to accessed all the static data members of the class only.
// static fxn can only be called with the class and not need of the obj.


#include <iostream>
using namespace std;

class Employee
{
    int id;           // employee id
    static int count; // count of the employee. write the static keyword as well define it outside.

public:
    void setData(void)
    {
        cout << "Enter id " << "\n";
        cin >> id;
        count++; // increasing the count with the setting data.
    }
    void getData()
    {
        cout << id << "\n";
        cout << "The employee count is  " << count << "\n";
    }

    static void getCount(void){
        // cout << id; // throws error as static member fxn can't access the non static data members.
        cout << "The value of the count is " << count << endl;
    }
};



int Employee ::count; // defined it outside with the class so as to make it have value even if the new object is created.
// also we don't need to initialise with zero. it is already initialise with zero. ie. default value is zero.
// if you want to initialize the count, you can do it here.
// int Employee ::count = 100; to start the count with 100.

int main()
{
    Employee e1, e2, e3;

    // e1.id = 111; //can't do that as id is private
    // e1.count++; //can't do that as count is private

    e1.setData();
    e1.getData();
    Employee::getCount();

    e2.setData();
    e2.getData();
    Employee::getCount();

    e3.setData();
    e3.getData();
    Employee::getCount();

    return 0;
}

// summary:  static fxn can access only the static member fxn of the class. also static member fxn are called not by the obj but by the class they are associated with.
// static data members are the values whom every obj can access whenever it wants within the class and they are initialized already with the zero.