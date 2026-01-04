/*
Compound Operators in C++
This program demonstrates the use of compound assignment operators in C++.

Compound assignment operators combine a binary operation and an assignment into a single operation. Examples include +=, -=, *=, /=, and %=.


*/

#include <iostream>

int main() { 
    //Variable declarations
    int value {10};

    //Using compound operators
    std::cout << "Initial value: " << value << std::endl;

    //Addition assignment
    value += 5; //Add 5 to value variable
    std::cout << "After += 5: " << value << std::endl;
    //Subtraction assignment
    value -= 3; //Subtract 3 from value variable
    std::cout << "After -= 3: " << value << std::endl;
    //Multiplication assignment
    value *= 2; //M ultiply value by 2
    std::cout << "After *= 2: " << value << std::endl;
    //Division assignment
    value /= 4; //Devide value by 4
    std::cout << "After /= 4: " << value << std::endl;
    //Modulo assignment
    value %= 3; //Get remainder of value divided by 3
    std::cout << "After %= 3: " << value << std::endl;

    return 0;
}