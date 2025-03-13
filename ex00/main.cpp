#include "whatever.hpp"

int main()
{
    int a = 3, b = 7;
    
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    std::cout << "min(2, 5) = " << min(2, 5) << std::endl;
    std::cout << "max(2, 5) = " << max(2, 5) << std::endl;

    std::string s1 = "apple", s2 = "banana";
    std::cout << "min(\"apple\", \"banana\") = " << ::min(s1, s2) << std::endl;
    std::cout << "max(\"apple\", \"banana\") = " << ::max(s1, s2) << std::endl;

    return 0;
}