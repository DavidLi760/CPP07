#include "Array.hpp"

int main()
{
    try
    {
        Array<int> arr(5);

        for (unsigned int i = 0; i < arr.size(); i++)
            arr[i] = i * 10;

        std::cout << "Tableau : ";
        for (unsigned int i = 0; i < arr.size(); i++)
            std::cout << arr[i] << " ";
        std::cout << std::endl;

        std::cout << "Element à l'index 2 : " << arr[2] << std::endl;

        Array<int> arrCopy = arr;
        arrCopy[2] = 999;

        std::cout << "Original : " << arr[2] << ", Copie : " << arrCopy[2] << std::endl;

        std::cout << "Accès hors limites : " << arr[10] << std::endl;
    } 
    catch (const std::exception& e)
    {
        std::cerr << "Exception attrapée : " << e.what() << std::endl;
    }
    return 0;
}