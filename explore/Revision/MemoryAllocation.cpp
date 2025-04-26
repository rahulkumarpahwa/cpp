#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter; 
    // all these are private

public:
    void initCounter()
    {
        counter = 0; // we need to init otherwise the counter will have a garbage value.
    }
    void displayPrice();
    void setPrice();
};

void Shop ::setPrice()
{
    cout << "Enter the id of the item" << "\n";
    cin >> itemId[counter];
    cout << "Enter the price of the item" << "\n";
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the Price of the item with id " << itemId[i] << " is " << itemPrice[i] << "\n";
    }
}

int main()
{

    Shop s;
    s.initCounter();
    s.setPrice();
    s.setPrice();
    s.setPrice();
    s.setPrice(); // we can loop the set price if we want.
    s.displayPrice();

    return 0;
}