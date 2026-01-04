/*
Relational Operators in C++
This program demonstrates the use of relational operators in C++.

Relational operators compare two values and return a boolean result (true or false).
Examples include ==, !=, <, >, <=, >=.

*/

#include <iostream>
#include <iomanip> //for std::boolalpha

int main() { 
    //Variable declarations
    int number1 {10};
    int number2 {20};

    std::cout << "Number1: " << number1 << std::endl;
    std::cout << "Number2: " << number2 << std::endl;
    std::cout << std::endl;
    //Using boolalpha to display boolean values as true/false
    std::cout << std::boolalpha;

    //Relational Operators
    //Comparison expressions need to be inside parentheses when used inside std::cout
    std::cout << "number1 == number2: " << (number1 == number2) << std::endl; //Equal to
    std::cout << "number1 != number2: " << (number1 != number2) << std::endl; //Not equal to
    std::cout << "number1 < number2: " << (number1 < number2) << std::endl;   //Less than
    std::cout << "number1 > number2: " << (number1 > number2) << std::endl;   //Greater than
    std::cout << "number1 <= number2: " << (number1 <= number2) << std::endl; //Less than or equal to
    std::cout << "number1 >= number2: " << (number1 >= number2) << std::endl; //Greater than or equal to

    //Store the result of a relational operation in a boolean variable
    bool result = (number1 < number2);
    std::cout << "\nResult of (number1 < number2) stored in boolean variable 'result': " << result << std::endl;
    
    return 0;
}