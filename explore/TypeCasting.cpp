#include <iostream>
using namespace std;

int main()
{
    // implicit conversion

    char grade = 'A';
    int value = grade;
    cout << "The value of the Grade is " << value << endl; // 65 - ASCII value

    float PI = 3.14f;
    double newPI = PI;
    cout<< "The Double Value of the PI is " << newPI << endl;
    // small -> big

    // explicit typecasting:
    double price = 100.99;
    int newPrice = (int)price;
    cout << "The value of Price in newPrice is " << newPrice << endl;
    // big -> small

    return 0;
}