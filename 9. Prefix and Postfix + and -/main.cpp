/*
Prefix and Postfix ++ and -- Operators in C++
This program demonstrates the use of prefix and postfix increment and decrement operators in C++.

Prefix operators (++var, --var) increment or decrement the value of the variable before it is used in an expression.
Postfix operators (var++, var--) increment or decrement the value of the variable after it is used in an expression.

*/

#include <iostream>

int main() { 
    //Variable declarations
    int value {5};

    //Increment by one
    int value1 = value + 1; //Standard increment
    std::cout << "Standard increment: The value is " << value << " incrementing by 1 using value = value + 1; the result is " << value1 << std::endl;
    value = 5; //Reset value
    std::cout << "\n";
    //Decrement by one
    int value2 = value - 1; //Standard decrement
    std::cout << "Standard decrement: The value is " << value << " decrementing by 1 using value = value - 1; the result is " << value2 << std::endl;
    value = 5; //Reset value
    std::cout << "\n";

    //Postfix increment
    std::cout << "Postfix increment: The value is " << value++ << " incrementing by 1 using value++; the result is " << value << std::endl; //Note the value used before increment
    value = 5; //Reset value
    std::cout << "\n";
    //Postfix decrement
    std::cout << "Postfix decrement: The value is " << value-- << " decrementing by 1 using value--; the result is " << value << std::endl; //Note the value used before decrement
    value = 5; //Reset value
    std::cout << "\n";
    //Prefix increment
    std::cout << "Prefix increment: The value is " << value << " incrementing by 1 using ++value; the result is " << ++value << std::endl; //Note the value used after increment
    value = 5; //Reset value
    std::cout << "\n";
    //Prefix decrement
    std::cout << "Prefix decrement: The value is " << value << " decrementing by 1 using --value; the result is " << --value << std::endl; //Note the value used after decrement
    value = 5; //Reset value

    return 0;
}