#include <iostream>
#include <limits>

int main() {
    std::cout << "Size of Data Types in C++" << std::endl;
    std::cout << "=========================" << std::endl;
    std::cout << "Size of char = " << sizeof(char) << " Bytes" << std::endl;
    std::cout << "Size of short = " << sizeof(short) << " Bytes" << std::endl;
    std::cout << "Size of int = " << sizeof(int) << " Bytes" << std::endl;
    std::cout << "Size of long = " << sizeof(long) << " Bytes" << std::endl;
    std::cout << "Size of long long = " << sizeof(long long) << " Bytes" << std::endl;
    std::cout << "Size of float = " << sizeof(float) << " Bytes" << std::endl;
    std::cout << "Size of double = " << sizeof(double) << " Bytes" << std::endl;
    std::cout << "Size of long double = " << sizeof(long double) << " Bytes" << std::endl;
    std::cout << "\n";

    std::cout << "The Range of Data Types in C++" << std::endl;
    std::cout << "=============================" << std::endl;
    
    std::cout << "Range of signed char: " << std::numeric_limits<signed char>::min() 
              << " to " << std::numeric_limits<signed char>::max() << std::endl;
    std::cout << "Range of unsigned char: 0 to " << std::numeric_limits<unsigned char>::max() << "\n\n";

    std::cout << "Range of signed short int: " << std::numeric_limits<short>::min() 
              << " to " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "Range of unsigned short int: 0 to " << std::numeric_limits<unsigned short>::max() << "\n\n";

    std::cout << "Range of signed int: " << std::numeric_limits<int>::min() 
              << " to " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Range of unsigned int: 0 to " << std::numeric_limits<unsigned int>::max() << "\n\n";

    std::cout << "Range of signed long int: " << std::numeric_limits<long>::min() 
              << " to " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "Range of unsigned long int: 0 to " << std::numeric_limits<unsigned long>::max() << "\n\n";

    std::cout << "Range of signed long long int: " << std::numeric_limits<long long>::min() 
              << " to " << std::numeric_limits<long long>::max() << std::endl;
    std::cout << "Range of unsigned long long int: 0 to " << std::numeric_limits<unsigned long long>::max() << "\n\n";

    std::cout << "Range of float: " << std::numeric_limits<float>::min() 
              << " to " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "Range of double: " << std::numeric_limits<double>::min() 
              << " to " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "Range of long double: " << std::numeric_limits<long double>::min() 
              << " to " << std::numeric_limits<long double>::max() << "\n\n";

    return 0;
}