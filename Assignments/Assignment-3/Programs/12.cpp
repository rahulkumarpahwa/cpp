// 7. Pure Virtual Function & Abstract Class
#include <iostream>

class Animal
{
public:
    virtual void makeSound() = 0; // Pure virtual function
};

class Dog : public Animal
{
public:
    void makeSound() override
    {
        std::cout << "Dog barks: Woof!" << std::endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound() override
    {
        std::cout << "Cat meows: Meow!" << std::endl;
    }
};

int main()
{
    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();

    animal1->makeSound();
    animal2->makeSound();

    delete animal1;
    delete animal2;

    return 0;
}
