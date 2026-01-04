/*
Basic Operations in C++
This program demonstrates basic operations in C++ such as input/output, arithmetic operations, and variable declarations

1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Modulus

*/

#include <iostream>

int main() { 

    // Variable declarations
    int number1, number2;
    int sum, difference, product, quotient, modulus;
    int operationType;

    // User input
    //Prompt user to select operation type
    std::cout << "Select your operation type from the following options:" << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Modulus" << std::endl;

    std::cin >> operationType;

    switch (operationType) {
        case 1:
            std::cout << "You selected Addition." << std::endl;
            break;
        case 2:
            std::cout << "You selected Subtraction." << std::endl;
            break;
        case 3:
            std::cout << "You selected Multiplication." << std::endl;
            break;
        case 4:
            std::cout << "You selected Division." << std::endl;
            break;
        case 5:
            std::cout << "You selected Modulus." << std::endl;
            break;
        default:
            std::cout << "Invalid selection. Please restart the program and select a valid option." << std::endl;
            return 1; // Exit the program with an error code
    }

    if (operationType == 1) {
        std::cout << "Performing Addition operation." << std::endl;
        std::cout << "Enter first integer: ";
        std::cin >> number1;
        std::cout << "Enter second integer: ";
        std::cin >> number2;
        sum = number1 + number2;
        std::cout << "Sum: " << sum << std::endl;
    } else if (operationType == 2) {
        std::cout << "Performing Subtraction operation." << std::endl;
        std::cout << "Enter first integer: ";
        std::cin >> number1;
        std::cout << "Enter second integer: ";
        std::cin >> number2;
        difference = number1 - number2;
        std::cout << "Difference: " << difference << std::endl;
    } else if (operationType == 3) {
        std::cout << "Performing Multiplication operation." << std::endl;
        std::cout << "Enter first integer: ";
        std::cin >> number1;
        std::cout << "Enter second integer: ";
        std::cin >> number2;
         product = number1 * number2;
        std::cout << "Product: " << product << std::endl;
    } else if (operationType == 4) {
        std::cout << "Performing Division operation." << std::endl;
        std::cout << "Enter first integer: ";
        std::cin >> number1;
        std::cout << "Enter second integer: ";
        std::cin >> number2;
        quotient = number1 / number2;
        std::cout << "Quotient: " << quotient << std::endl;
    } else if (operationType == 5) {
        std::cout << "Performing Modulus operation." << std::endl;
        std::cout << "Enter first integer: ";
        std::cin >> number1;
        std::cout << "Enter second integer: ";
        std::cin >> number2;
        modulus = number1 % number2;
        std::cout << "Modulus: " << modulus << std::endl;
    }
    return 0;
}