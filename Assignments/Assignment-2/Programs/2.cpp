// 2. Constructors and Destructors (Car)
#include <iostream>
#include <string>

class Car
{
public:
    std::string brand;
    std::string model;
    int year;

    Car(std::string brand, std::string model, int year) : brand(brand), model(model), year(year)
    {
        std::cout << "Car constructor called for " << brand << " " << model << std::endl;
    }

    ~Car()
    {
        std::cout << "Car destructor called for " << brand << " " << model << std::endl;
    }
};

int main()
{
    Car car1("Toyota", "Camry", 2022);

    {
        Car car2("Honda", "Civic", 2023);
    } // car2 is destroyed at the end of this block

    return 0; // car1 is destroyed at the end of main()
}
