// 3. Dynamic Memory Allocation (Book)
#include <iostream>
#include <string>

class Book
{
public:
    std::string title;
    double price;

    Book(std::string title, double price) : title(title), price(price) {}

    void displayDetails() const
    {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Price: " << price << std::endl;
    }
};

int main()
{
    Book *bookPtr = new Book("The C++ Programming Language", 49.99);

    bookPtr->displayDetails();

    delete bookPtr;
    bookPtr = nullptr;

    return 0;
}
