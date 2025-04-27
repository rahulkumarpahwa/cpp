#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    Shop()
    {
    }
    Shop(int id, float price)
    {
        this->id = id;
        this->price = price;
    }
    void display();
};

void Shop::display()
{
    cout << "the id and price is " << this->id << " " << this->price << endl;
}

int main()
{
    Shop *ptr = new Shop[2]{
        Shop(34, 33), Shop(56, 99)};

    ptr->display();
    (ptr + 1)->display();

    ptr[0].display();
    ptr[1].display();

    return 0;
}