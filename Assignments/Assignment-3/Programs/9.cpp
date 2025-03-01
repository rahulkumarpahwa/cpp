// 5. Hybrid Inheritance
// A. Vehicle-Car/Bike-SportsCar
#include <iostream>
#include <string>

class Vehicle
{
protected:
    std::string brand;
    int speed;

public:
    Vehicle(std::string brand, int speed) : brand(brand), speed(speed) {}

    void displayVehicleDetails() const
    {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Speed: " << speed << std::endl;
    }
};

class Car : virtual public Vehicle
{
protected:
    int numDoors;

public:
    Car(std::string brand, int speed, int numDoors) : Vehicle(brand, speed), numDoors(numDoors) {}

    void displayCarDetails() const
    {
        displayVehicleDetails();
        std::cout << "Number of Doors: " << numDoors << std::endl;
    }
};

class Bike : virtual public Vehicle
{
protected:
    bool hasGear;

public:
    Bike(std::string brand, int speed, bool hasGear) : Vehicle(brand, speed), hasGear(hasGear) {}

    void displayBikeDetails() const
    {
        displayVehicleDetails();
        std::cout << "Has Gear: " << (hasGear ? "Yes" : "No") << std::endl;
    }
};

class SportsCar : public Car, public Bike
{
private:
    bool turbo;

public:
    SportsCar(std::string brand, int speed, int numDoors, bool hasGear, bool turbo)
        : Vehicle(brand, speed), Car(brand, speed, numDoors), Bike(brand, speed, hasGear), turbo(turbo) {}

    void turboMode()
    {
        if (turbo)
        {
            std::cout << "Turbo mode activated!" << std::endl;
        }
        else
        {
            std::cout << "Turbo mode not available." << std::endl;
        }
    }

    void displayDetails() const
    {
        displayVehicleDetails();
        std::cout << "Number of Doors: " << numDoors << std::endl;
        std::cout << "Has Gear: " << (hasGear ? "Yes" : "No") << std::endl;
        std::cout << "Turbo: " << (turbo ? "Yes" : "No") << std::endl;
    }
};

int main()
{
    SportsCar sportsCar("Ferrari", 250, 2, true, true);
    sportsCar.displayDetails();
    sportsCar.turboMode();
    return 0;
}
