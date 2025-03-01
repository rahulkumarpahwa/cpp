// 4. Hierarchical Inheritance
#include <iostream>
#include <string>

class Vehicle
{
protected:
    std::string brand;
    int year;

public:
    Vehicle(std::string brand, int year) : brand(brand), year(year) {}

    void displayVehicleDetails() const
    {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
};

class Car : public Vehicle
{
private:
    std::string fuelType;

public:
    Car(std::string brand, int year, std::string fuelType) : Vehicle(brand, year), fuelType(fuelType) {}

    void displayDetails() const
    {
        displayVehicleDetails();
        std::cout << "Fuel Type: " << fuelType << std::endl;
    }
};

class Bike : public Vehicle
{
private:
    int engineCC;

public:
    Bike(std::string brand, int year, int engineCC) : Vehicle(brand, year), engineCC(engineCC) {}

    void displayDetails() const
    {
        displayVehicleDetails();
        std::cout << "Engine CC: " << engineCC << std::endl;
    }
};

int main()
{
    Car car("Toyota", 2022, "Petrol");
    Bike bike("Honda", 2023, 150);

    car.displayDetails();
    std::cout << std::endl;
    bike.displayDetails();

    return 0;
}
