// B. Animal-Mammal-Dog
#include <iostream>
#include <string>

class Animal
{
public:
    void eat()
    {
        std::cout << "Animal is eating" << std::endl;
    }
};

class Mammal : public Animal
{
public:
    void walk()
    {
        std::cout << "Mammal is walking" << std::endl;
    }
};

class Dog : public Mammal
{
public:
    void bark()
    {
        std::cout << "Dog is barking" << std::endl;
    }
};

int main()
{
    Dog dog;
    dog.eat();
    dog.walk();
    dog.bark();
    return 0;
}
