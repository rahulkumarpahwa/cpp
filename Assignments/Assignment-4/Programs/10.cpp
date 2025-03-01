// 10. Class Template (Array)
#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
private:
    T *data;
    int size;
    int capacity;

public:
    Array(int capacity) : capacity(capacity), size(0)
    {
        data = new T[capacity];
    }

    ~Array()
    {
        delete[] data;
    }

    void insert(T value)
    {
        if (size == capacity)
        {
            throw std::out_of_range("Array is full!");
        }
        data[size++] = value;
    }

    void display() const
    {
        for (int i = 0; i < size; ++i)
        {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

    T findMax() const
    {
        if (size == 0)
        {
            throw std::runtime_error("Array is empty!");
        }
        T maxVal = data[0];
        for (int i = 1; i < size; ++i)
        {
            if (data[i] > maxVal)
            {
                maxVal = data[i];
            }
        }
        return maxVal;
    }
};

int main()
{
    try
    {
        Array<int> intArray(5);
        intArray.insert(10);
        intArray.insert(5);
        intArray.insert(20);

        std::cout << "Int Array: ";
        intArray.display();
        std::cout << "Max value: " << intArray.findMax() << std::endl;
    }
    catch (const std::exception &error)
    {
        std::cerr << "Error: " << error.what() << std::endl;
    }

    try
    {
        Array<double> doubleArray(3);
        doubleArray.insert(3.14);
        doubleArray.insert(1.618);
        std::cout << "Double Array: ";
        doubleArray.display();
        std::cout << "Max value: " << doubleArray.findMax() << std::endl;
    }
    catch (const std::exception &error)
    {
        std::cerr << "Error: " << error.what() << std::endl;
    }

    return 0;
}
