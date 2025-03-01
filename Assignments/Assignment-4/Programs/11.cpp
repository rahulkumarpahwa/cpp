// Section 4: Student Record Management System
#include <iostream>
#include <fstream>
#include <string>
#include <limits> // Required for numeric_limits
#include <vector>

// Function to clear input buffer
void clearInputBuffer()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

template <typename T>
class Student
{
public:
    std::string name;
    int rollNo;
    T marks;

    void getData()
    {
        std::cout << "Enter student name: ";
        std::getline(std::cin, name); // Use getline to read names with spaces

        std::cout << "Enter roll number: ";
        while (!(std::cin >> rollNo))
        {
            std::cout << "Invalid input. Enter an integer for roll number: ";
            std::cin.clear();
            clearInputBuffer();
        }
        clearInputBuffer(); // Clear the newline after reading the roll number

        std::cout << "Enter marks: ";
        while (!(std::cin >> marks))
        {
            std::cout << "Invalid input. Enter a numeric value for marks: ";
            std::cin.clear();
            clearInputBuffer();
        }
        clearInputBuffer(); // Clear the newline after reading marks
    }

    void showData() const
    {
        std::cout << "Name: " << name << ", Roll Number: " << rollNo << ", Marks: " << marks << std::endl;
    }
};

// Function to write student data to file
template <typename T>
void writeStudentToFile(const Student<T> &student, const std::string &filename)
{
    std::ofstream outputFile(filename, std::ios::app); // Append mode

    if (!outputFile.is_open())
    {
        throw std::runtime_error("Error opening file for writing!");
    }

    outputFile << student.name << "," << student.rollNo << "," << student.marks << std::endl;
    outputFile.close();
}

// Function to read student data from file
template <typename T>
std::vector<Student<T>> readStudentsFromFile(const std::string &filename)
{
    std::ifstream inputFile(filename);
    std::vector<Student<T>> students;

    if (!inputFile.is_open())
    {
        throw std::runtime_error("Error opening file for reading!");
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        Student<T> student;
        std::stringstream ss(line);
        std::string token;

        std::getline(ss, student.name, ',');

        std::getline(ss, token, ',');
        try
        {
            student.rollNo = std::stoi(token);
        }
        catch (const std::invalid_argument &e)
        {
            std::cerr << "Warning: Invalid roll number in file. Skipping record." << std::endl;
            continue;
        }
        catch (const std::out_of_range &e)
        {
            std::cerr << "Warning: Roll number out of range in file. Skipping record." << std::endl;
            continue;
        }

        std::getline(ss, token, ',');
        try
        {
            student.marks = std::stod(token); // Use stod for double
        }
        catch (const std::invalid_argument &e)
        {
            std::cerr << "Warning: Invalid marks in file. Skipping record." << std::endl;
            continue;
        }
        catch (const std::out_of_range &e)
        {
            std::cerr << "Warning: Marks out of range in file. Skipping record." << std::endl;
            continue;
        }

        students.push_back(student);
    }

    inputFile.close();
    return students;
}

// Function to search for a student by Roll Number
template <typename T>
void searchStudentByRollNo(const std::string &filename, int rollNo)
{
    try
    {
        std::vector<Student<T>> students = readStudentsFromFile<T>(filename);
        bool found = false;
        for (const auto &student : students)
        {
            if (student.rollNo == rollNo)
            {
                std::cout << "Student found:\n";
                student.showData();
                found = true;
                break;
            }
        }
        if (!found)
        {
            std::cout << "Student with Roll Number " << rollNo << " not found.\n";
        }
    }
    catch (const std::runtime_error &error)
    {
        std::cerr << "Error: " << error.what() << std::endl;
    }
}

int main()
{
    const std::string filename = "students.txt";
    int choice, rollNo;

    do
    {
        std::cout << "\nStudent Record Management System\n";
        std::cout << "1. Add Student Record\n";
        std::cout << "2. Display All Records\n";
        std::cout << "3. Search Student by Roll Number\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";

        while (!(std::cin >> choice))
        {
            std::cout << "Invalid input. Enter an integer: ";
            std::cin.clear();
            clearInputBuffer();
        }
        clearInputBuffer();

        switch (choice)
        {
        case 1:
        {
            Student<double> student;
            student.getData();
            try
            {
                writeStudentToFile(student, filename);
                std::cout << "Student record added successfully.\n";
            }
            catch (const std::runtime_error &error)
            {
                std::cerr << "Error: " << error.what() << std::endl;
            }
            break;
        }
        case 2:
        {
            try
            {
                std::vector<Student<double>> students = readStudentsFromFile<double>(filename);
                if (students.empty())
                {
                    std::cout << "No student records found.\n";
                }
                else
                {
                    std::cout << "Student Records:\n";
                    for (const auto &student : students)
                    {
                        student.showData();
                    }
                }
            }
            catch (const std::runtime_error &error)
            {
                std::cerr << "Error: " << error.what() << std::endl;
            }
            break;
        }
        case 3:
        {
            std::cout << "Enter roll number to search: ";
            while (!(std::cin >> rollNo))
            {
                std::cout << "Invalid input. Enter an integer for roll number: ";
                std::cin.clear();
                clearInputBuffer();
            }
            clearInputBuffer();
            searchStudentByRollNo<double>(filename, rollNo);
            break;
        }
        case 0:
            std::cout << "Exiting program.\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
