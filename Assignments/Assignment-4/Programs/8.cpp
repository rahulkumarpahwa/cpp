// 8. File Copy Program
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string sourceFileName, destinationFileName;

    std::cout << "Enter the source file name: ";
    std::cin >> sourceFileName;
    std::cout << "Enter the destination file name: ";
    std::cin >> destinationFileName;

    std::ifstream sourceFile(sourceFileName, std::ios::binary);
    if (!sourceFile.is_open())
    {
        std::cerr << "Error opening source file!" << std::endl;
        return 1;
    }

    std::ofstream destinationFile(destinationFileName, std::ios::binary);
    if (!destinationFile.is_open())
    {
        std::cerr << "Error opening destination file!" << std::endl;
        sourceFile.close(); // Close source file before exiting
        return 1;
    }

    char buffer[4096]; // Use a buffer for efficient copying
    while (sourceFile.read(buffer, sizeof(buffer)))
    {
        destinationFile.write(buffer, sourceFile.gcount());
    }

    destinationFile.close();
    sourceFile.close();

    std::cout << "File copied successfully." << std::endl;

    return 0;
}
