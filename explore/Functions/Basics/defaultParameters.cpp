#include <iostream>
using namespace std;

int simpleInterest(int p, int t, int r = 5); // so here the rate r has default parameter. we can add the default parameters in the trailing parameters only. default parameters are add from right to left.

int main()
{

    int si = simpleInterest(100, 2); // the default value of rate will be used.

    cout << si << endl;

    return 0;
}

int simpleInterest(int p, int t, int r) // function body.
{
    return (p * t * r) / 100;
}