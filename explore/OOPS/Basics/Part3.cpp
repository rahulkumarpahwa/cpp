// Memory Allocation with objects and using Arrays in Classes.

// when an obj is created, then memory is allocated completely for an object. but this is not true completely in actual the thing which are common in the all the objects is created once in the memory while the things which are the not same are created differently.
// like the properties are created differently while the member fxn which are the common is created once in the memory.
// eg. a member fxn creating salary is created once while properties which are the diff for each employee so it is stored diff. in memory.

// Here in this file, we will see the use of the arrays in the class as properties and how to access it and pass value of it.


#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter()
    {
        counter = 0;
    }

    void getPrice();
    void setPrice();
};

void Shop::setPrice()
{
    cout << "Enter the id of your item  " << counter+1 << "\n";
    cin >> itemId[counter];
    cout << "Enter the price of your item" << "\n";
    cin >> itemPrice[counter];
    counter++;
}

void Shop::getPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Item Id " << itemId[i] << " " << "Item Price " << itemPrice[i] << "\n";
    }
}

int main()
{
    Shop s1;
    s1.initCounter();
    s1.setPrice();
    s1.setPrice();
    s1.setPrice();
    s1.getPrice();

    return 0;
}