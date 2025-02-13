#include <iostream>
using namespace std;

// overloading means using the same thing for the different purposes.

int add(int, int);       // function declaration || fxn prototype
float add(float, float); // function declaration || fxn prototype

int main()
{

    int res1 = add(23, 34);
    float res2 = add(1.2f, 3.4f);

    cout << res1 << " " << res2 << endl;
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

float add(float a, float b)
{
    return a + b;
}

/*function overloading is of three types :
1. types of the parameters. eg : add(int , double);
2. order of parameters  eg: add(double, int);
3. number of parameters. eg: add(int,int ); add(int, int, int); */