// 12. Operator Overloading (<< and >> for Input/Output Stream) (Time)
#include <iostream>

class Time
{
public:
    int hours;
    int minutes;

    Time(int hours = 0, int minutes = 0) : hours(hours), minutes(minutes) {}

    friend std::ostream &operator<<(std::ostream &os, const Time &time)
    {
        os << time.hours << ":" << time.minutes;
        return os;
    }

    friend std::istream &operator>>(std::istream &is, Time &time)
    {
        std::cout << "Enter hours: ";
        is >> time.hours;
        std::cout << "Enter minutes: ";
        is >> time.minutes;
        return is;
    }
};

int main()
{
    Time t1;
    std::cin >> t1; // Input time

    std::cout << "The time is: " << t1 << std::endl; // Output time

    return 0;
}
