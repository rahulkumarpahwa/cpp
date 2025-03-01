// Section 3: Templates
// 9. Function Template (findMax)
#include <iostream>

template <typename T>
T findMax(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int intMax = findMax(5, 10);
    double doubleMax = findMax(5.5, 3.2);
    char charMax = findMax('a', 'z');

    std::cout << "Max of 5 and 10: " << intMax << std::endl;
    std::cout << "Max of 5.5 and 3.2: " << doubleMax << std::endl;
    std::cout << "Max of 'a' and 'z': " << charMax << std::endl;

    return 0;
}
