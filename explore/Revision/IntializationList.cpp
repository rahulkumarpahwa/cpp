#include <iostream>
using namespace std;

class Test
{
    int a, b;

public:
    Test(int i, int j) : a(i), b(j)
    {
        cout<<"Constructor called " << a <<" + "<< b <<endl;
    }
};

int main()
{
    Test t(2, 3);
    return 0;
}