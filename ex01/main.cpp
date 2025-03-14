#include "iter.hpp"

template <typename T>
void printElement(const T& elem)
{
    std::cout << elem << " ";
}

void increment(int& elem)
{
    elem += 1;
}

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Original intArray: ";
    iter(intArray, size, printElement<int>);
    std::cout << std::endl;

    std::cout << "Incrementing intArray... " << std::endl;
    iter(intArray, size, increment);

    std::cout << "Modified intArray: ";
    iter(intArray, size, printElement<int>);
    std::cout << std::endl;

    std::string strArray[] = {"Hello", "World", "C++", "Templates"};
    size_t strSize = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << "String array: ";
    iter(strArray, strSize, printElement<std::string>);
    std::cout << std::endl;

    return 0;
}