// 11. Friend Function with Two Classes(ClassA and ClassB)
#include <iostream>

class ClassB; // Forward declaration

class ClassA
{
private:
    int valueA;

public:
    ClassA(int valueA = 0) : valueA(valueA) {}

    friend int sumObjects(const ClassA &a, const ClassB &b);
};

class ClassB
{
private:
    int valueB;

public:
    ClassB(int valueB = 0) : valueB(valueB) {}

    friend int sumObjects(const ClassA &a, const ClassB &b);
};

int sumObjects(const ClassA &a, const ClassB &b)
{
    return a.valueA + b.valueB;
}

int main()
{
    ClassA a(10);
    ClassB b(20);

    int sum = sumObjects(a, b);
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
