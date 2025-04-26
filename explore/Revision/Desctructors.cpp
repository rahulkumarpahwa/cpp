#include <iostream>
using namespace std;

class Num
{
    int count = 100;

public:
    Num()
    {
        cout << "The time during which Constructor is called " << count << endl;
        count++;
    }

    ~Num()
    {
        cout << "The time during which Destructor is called " << count << endl;
        count--;
    }
};

int main()
{
    Num n;
    return 0;
}