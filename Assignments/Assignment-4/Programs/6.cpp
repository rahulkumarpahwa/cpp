// 6. Reading from a File (Student Details)
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream inputFile("students.txt");

    if (!inputFile.is_open())
    {
        std::cerr << "Error opening file for reading!" << std::endl;
        return 1;
    }

    std::string name;
    int rollNumber, marks;

    while (inputFile >> name >> rollNumber >> marks)
    {
        std::cout << "Name: " << name << ", Roll Number: " << rollNumber << ", Marks: " << marks << std::endl;
    }

    inputFile.close();

    return 0;
}
