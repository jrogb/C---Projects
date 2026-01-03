/*
Functions and Statements in C++
This program demonstrates the use of functions and statements in C++.
A function is a reusable block of code that performs a specific task.
A Statement is a complete instruction that performs an action.
*/



#include <iostream>
// Function to add two numbers and return the sum
int addNumbers(int first_param, int second_param) {
    int result = first_param + second_param;
    return result;
}

int main(int argc, char **argv){
    // Statements to declare variables
    int first_number {5};
    int second_number {20};

    // Statement to call the function using the declared variables
    int sum = first_number + second_number;

    //Statement to call the predefined function
    int sum2 = addNumbers(first_number, second_number);

    // Statement to output the result
    std::cout << "The sum of " << first_number << " and " << second_number << " is: " << sum << std::endl; // Outputs the value of sum
    std::cout << "The sum of 5 and 10 is: " << addNumbers(5, 10) << std::endl; // Directly calls the predefined function within the output statement
    std::cout << "The sum of " << first_number << " and " << second_number << " is: " << sum2 << std::endl; // Outputs the value of sum2

    return 0;
}

