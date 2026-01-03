/*
Number Systems
1. Binary (Base 2): Uses two digits, 0 and 1. Each digit represents a power of 2.
   Example: 1011 in binary = 1*2^3 + 0*2^2 + 1*2^1 + 1*2^0 = 8 + 0 + 2 + 1 = 11 in decimal.
2. Decimal (Base 10): Uses ten digits, 0 to 9. Each digit represents a power of 10.
   Example: 345 in decimal = 3*10^2 + 4*10^1 + 5*10^0 = 300 + 40 + 5 = 345 in decimal.
3. Octal (Base 8): Uses eight digits, 0 to 7. Each digit represents a power of 8.
    Example: 27 in octal = 2*8^1 + 7*8^0 = 16 + 7 = 23 in decimal.
4. Hexadecimal (Base 16): Uses sixteen symbols, 0-9 and A-F (where A=10, B=11, C=12, D=13, E=14, F=15). Each digit represents a power of 16.
    Example: 1A3 in hexadecimal = 1*16^2 + 10*16^1 + 3*16^0 = 256 + 160 + 3 = 419 in decimal.

*/



#include <iostream>


int main(){
    // We will save the same number in different number systems. C++ allows us to represent numbers in various bases using specific prefixes.
    int number1 = 42; // Decimal representation
    int number2 = 0b101010; // Binary representation (C++14 and later)
    int number3 = 052; // Octal representation
    int number4 = 0x2A; // Hexadecimal representation

    std::cout << "Decimal: " << number1 << std::endl;
    std::cout << "Binary: " << number2 << std::endl;
    std::cout << "Octal: " << number3 << std::endl;
    std::cout << "Hexadecimal: " << number4 << std::endl;

    return 0;
}
