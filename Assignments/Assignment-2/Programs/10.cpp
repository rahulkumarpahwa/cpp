// 10. Constructor Overloading (Person)
#include <iostream>
#include <string>

class Person
{
public:
    std::string name;
    int age;

    Person() : name("Unknown"), age(0)
    {
        std::cout << "Default constructor called" << std::endl;
    }

    Person(std::string name) : name(name), age(0)
    {
        std::cout << "Constructor with name called" << std::endl;
    }

    Person(std::string name, int age) : name(name), age(age)
    {
        std::cout << "Constructor with name and age called" << std::endl;
    }

    void displayDetails() const
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

int main()
{
    Person person1;
    person1.displayDetails();

    Person person2("Bob");
    person2.displayDetails();

    Person person3("Charlie", 30);
    person3.displayDetails();

    return 0;
}
