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
        cout << "Enter the details of Kirana : name , id , price " << i + 1 << "\n";
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

    return 0;
}
