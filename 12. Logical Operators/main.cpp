/*
Logical Operators in C++
This program demonstrates the use of logical operators in C++.

Logical operators are used to combine multiple boolean expressions and return a boolean result (true or false).
Examples include && (logical AND), || (logical OR), and ! (logical NOT).
*/

#include <iostream>
# include <iomanip> //for std::boolalpha

int main() { 
    //Variable declarations
    //AND operator (&&) Table
    //if any operand is false, the result is false
    std::cout << "Logical AND (&&) Operator Truth Table:" << std::endl;
    std::cout << "a----------b-----------a && b" << std::endl;
    std::cout << "false------false-------false" << std::endl;
    std::cout << "false------true--------false" << std::endl;
    std::cout << "true-------false-------false" << std::endl;
    std::cout << "true-------true--------true" << std::endl;
    std::cout << std::endl;

    //OR operator (||) Table
    //if any operand is true, the result is true
    std::cout << "Logical OR (||) Operator Truth Table:" << std::endl;
    std::cout << "a----------b-----------a || b" << std::endl;
    std::cout << "false------false-------false" << std::endl;
    std::cout << "false------true--------true" << std::endl;
    std::cout << "true-------false-------true" << std::endl;
    std::cout << "true-------true--------true" << std::endl;
    std::cout << std::endl;

    //NOT operator (!) Table
    //inverts the boolean value
    std::cout << "Logical NOT (!) Operator Truth Table:" << std::endl;
    std::cout << "!a--------!a" << std::endl;
    std::cout << "!false----true" << std::endl;
    std::cout << "!true-----false" << std::endl;
    std::cout << std::endl;

    //Variable declarations for examples
    bool a {true};
    bool b {false};
    bool c {true};

    std::cout << std::boolalpha; //Display boolean values as true/false
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << std::endl;
    //Logical Operators Examples
    //Logical AND (&&)
    std::cout << "a && b: " << (a && b) << std::endl; //false
    std::cout << "a && c: " << (a && c) << std::endl; //true
    std::cout << "a && b && c: " << (a && b && c) << std::endl; //false
    //Logical OR (||)
    std::cout << "a || b: " << (a || b) << std::endl; //true
    std::cout << "b || b: " << (b || b) << std::endl; //false
    std::cout << "a || b || c: " << (a || b || c) << std::endl; //true
    //Logical NOT (!)
    std::cout << "!a: " << !a << std::endl; //false
    std::cout << "!b: " << !b << std::endl; //true
    std::cout << "!c: " << !c << std::endl; //false

    //combining logical operators
    std::cout << "\nCombining Logical Operators:" << std::endl;
    std::cout << "(a && b) || c: " << ((a && b) || c) << std::endl; //true
    std::cout << "!(a || b) && c: " << (!(a || b) && c) << std::endl; //false
    
    return 0;
}