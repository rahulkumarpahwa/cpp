// Destructor : To remove the memory used by object after it is destroyed.
#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value.
// when a code of block is executed, the compiler will automatically call the destructor.

int count = 0;

class Num
{
public:
    Num()
    {
        count++;
        cout << "This is the time when our constructor is called for object Number " << count << endl;
    }

    ~Num()
    {
        cout << "This is the time when our destructor is called object Number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "we are inside our main fxn" << endl;
    cout << "creating first object" << endl;
    Num n1;
    {
        cout << "Entering this block" << endl;
        cout << "creating two objects" << "\n";
        Num n2, n3;
        cout << "Exiting the block" << endl;
    }
    cout << "Back to main" << endl;

    return 0;
}

/* summary : the destructor for the object 2 and 3 is called first because when the block is finished for the object 2 and 3 then compiler feels likes their is no need for object so it calls their destructor first and then after the main block finishes the destructor for the object1 which is in the main block is called.*/