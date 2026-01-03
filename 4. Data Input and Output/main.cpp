/*
Data Input and Output in C++
This program demonstrates different ways to perform data input and output in C++.

*/



#include <iostream>
#include <string>

int main(int argc, char **argv){
    /*
    Different ways of printing data to the terminal
    */
    
    // Using std::cout to print a line
    std::cout << "Hello C++!" << std::endl;
    int age1 {25};
    std::cout << "I am " << age1 << " years old." << std::endl;

    // Using std::cerr to print an error message
    std::cerr << "Error: Something went wrong" << std::endl;

    // Using std::clog to print a log message
    std::clog << "Log Message: Something happened." << std::endl;

    /*
    Getting data input from the terminal
    */

    /*
    // Using std::cin to get user input
    int age2;
    std::string name;
    std::cout << "Enter your age and your name: " << std::endl;
    std::cin >> age2; 
    std::cin >> name; // User inputs age and name
    std::cout << "You are: " << age2 << " years old and your name is " << name << std::endl;
    */

    //using std::getline to get a full line of user input including spaces
    std::string full_name;
    std::cout << "Enter your full name: " << std::endl;
    std::getline(std::cin, full_name); // User inputs full name including spaces
    std::cout << "Your full name is: " << full_name << std::endl;

    return 0;
}
