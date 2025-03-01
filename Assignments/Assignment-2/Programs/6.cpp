// 6. Pass by Value vs. Pass by Reference (Number)
#include <iostream>

class Number
{
public:
    int value;

    Number(int value = 0) : value(value) {}

    void modifyValue(Number num)
    { // Pass by value
        num.value = 100;
        std::cout << "Inside modifyValue: " << num.value << std::endl;
    }

    void modifyReference(Number &num)
    { // Pass by reference
        num.value = 200;
        std::cout << "Inside modifyReference: " << num.value << std::endl;
    }
};

int main()
{
    Number n(50);

    std::cout << "Original value: " << n.value << std::endl;

    n.modifyValue(n);
    std::cout << "After modifyValue: " << n.value << std::endl;

    n.modifyReference(n);
    std::cout << "After modifyReference: " << n.value << std::endl;

    return 0;
}
