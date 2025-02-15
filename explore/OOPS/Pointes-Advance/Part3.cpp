// Array of Objects Using Pointers
#include <iostream>
using namespace std;

class Kirana
{
    string name;
    int id;
    float price;

public:
    void setData(string name, int inpId, int p)
    {
        this->name = name;
        id = inpId;
        price = p;
    }
    void display()
    {
        cout << "Name: " << name << ", ID: " << id << ", Price: " << price << "\n";
    }
};

int main()
{
    int size = 3;
    Kirana *shop = new Kirana[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the details of Shop 1 : name , id , price " << i + 1 << "\n";
        string name;
        int id;
        float price;
        cin >> name >> id >> price;
        (shop + i)->setData(name, id, price); // or you can set value for the ptr using arrow ooperator and then do ptr++.
    }

    for (int i = 0; i < size; i++)
    {
        (shop + i)->display();
    }

    // either Way:
    int size2 = 3;
    Kirana *shop2 = new Kirana[size2];
    Kirana *shopTemp = shop2;

    for (int i = 0; i < size2; i++)
    {
        cout << "Enter the details of Shop 2 : name , id , price " << i + 1 << "\n";
        string name;
        int id;
        float price;
        cin >> name >> id >> price;
        (shop2)->setData(name, id, price); // or you can set value for the ptr using arrow ooperator and then do ptr++.
        shop2++;                           // or you can increment the ptr using arrow ooperator and then do ptr++.
    }

    for (int i = 0; i < size; i++)
    {
        // here if we do the same as above ie. :
        // (shop + i)->display();
        // shop++;
        // then we got garbage value as shop is already pointing at the last element due to the above loop so we will do is use the another pointer  Kirana *shopTemp = shop2; ie. shopTemp that will point to the same pointer as the starting of the shop2 array of object.
        shopTemp->display();
        shopTemp++;
    }

    return 0;
}
