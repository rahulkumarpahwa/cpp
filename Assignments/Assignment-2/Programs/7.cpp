// 7. Operator Overloading(+Operator)(Complex)
#include <iostream>

class Complex
{
public:
    double real;
    double imaginary;

    Complex(double real = 0.0, double imaginary = 0.0) : real(real), imaginary(imaginary) {}

    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    void display() const
    {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main()
{
    Complex c1(1.0, 2.0);
    Complex c2(3.0, 4.0);

    Complex c3 = c1 + c2;
    c3.display();

    return 0;
}
