// Ambiguity resolution in inheritance.

#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

/*
Practice Question:
Create 2 classes:
1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, - , * , / and displays the results using another function.
2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your choice and displays the results using another function.

Create another class HybridCalculator and inherit it using these 2 classes:
Q1. what type of Inheritance are you using?
Q2. which mode of Inheritance are you using?
Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
Q4. How is code reusability implemented?
*/

class SimpleCalculator
{
protected:
    int a;
    int b;

public:
    void setValues(int x, int y)
    {
        a = x;
        b = y;
    }

    void Operations()

    {

        char ch;
        cout << "Enter the operator you want to perform from the options: "
             << "\n"
             << "+" << "\n"
             << "-" << "\n"
             << "*" << "\n"
             << "/" << endl;
        cin >> ch;
        switch (ch)
        {
        case '+':
            cout << "Addition: " << a + b << endl;
            break;
        case '-':
            cout << "Subtraction: " << a - b << endl;
            break;
        case '*':
            cout << "Multiplication: " << a * b << endl;
            break;
        case '/':
            cout << "Division: " << a / b << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
        }
    }
};

class scientificCalculator
{
protected:
    double a;
    double b;

public:
    void setValues(double x, double y)
    {
        a = x;
        b = y;
    }
    void Operations()
    {
        char ch;
        cout << "Enter the operator you want to perform from the options: "
             << "\n"
             << "P : Power" << "\n"
             << "S : Square Root" << "\n"
             << endl;
        cin >> ch;
        switch (ch)
        {
        case 'P':
            cout << "Power: " << pow(a, b) << endl;
            break;
        case 'S':
            cout << "SquareRoot of a: " << sqrt(a) << " SquareRoot of b: " << sqrt(b) << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
        }
    }
};

class HybridCalculator : public SimpleCalculator, public scientificCalculator
{
    int num;
    int a;
    int b;

public:
    void caller()
    {
        cout << "Set the values of the parameters" << endl;
        cin >> a >> b;
        SimpleCalculator::setValues(a, b);
        scientificCalculator::setValues(a, b);

        cout << "Choose from the following options" << endl;
        cout << "1. Simple Calculator" << endl;
        cout << "2. Scientific Calculator" << endl;
        cin >> num;
        switch (num)
        {
        case 1:

            SimpleCalculator::Operations();
            break;

        case 2:
            scientificCalculator::Operations();
            break;

        default:
            break;
        }

      
    }
};

int main()
{
    HybridCalculator h1;
    h1.caller();
    return 0;
}