// Protected Access Modifier in cpp

#include <iostream>
using namespace std;

class Base
{
protected:
    int a; // when we want the a to be private and but also inherit. then we use the protected access specifier.

private:
    int b;
};

// for a protected member :
/*                  Public derivation Private Derivation Protected Derivation
1.Private members   Not Inherited       Not Inherited       Not Inherited
2. Protected members Protected          Private             Protected   
3. Public members    Public             Private             Protected
*/


class Derived : protected Base
{

    
};

int main()
{
    Base b;
    Derived d;
    // cout << b.a; // because a is protected both in base class and derived class.
    return 0;
}