// 9. Virtual Destructor
#include <iostream>

class Base
{
public:
    virtual ~Base()
    {
        std::cout << "Base class destructor called" << std::endl;
    }
};

class Derived : public Base
{
public:
    ~Derived() override
    {
        std::cout << "Derived class destructor called" << std::endl;
    }
};

int main()
{
    Base *basePtr = new Derived();
    delete basePtr;
    return 0;
}
