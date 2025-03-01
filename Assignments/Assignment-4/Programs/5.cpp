// Section 2: File Handling
// 5. Writing to a File (Student Details)
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ofstream outputFile("students.txt");

    if (!outputFile.is_open())
    {
        std::cerr << "Error opening file for writing!" << std::endl;
        return 1;
    }

    std::string name;
    int rollNumber, marks;

    std::cout << "Enter student name: ";
    std::cin >> name;
    std::cout << "Enter roll number: ";
    std::cin >> rollNumber;
    std::cout << "Enter marks: ";
    std::cin >> marks;

    outputFile << name << " " << rollNumber << " " << marks << std::endl;
    outputFile.close();

    std::cout << "Student details written to file." << std::endl;

    return 0;
}
