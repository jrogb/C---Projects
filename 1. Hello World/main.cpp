/*
    This is a simple C++ program that demonstrates the basic structure of a C++ application,
    
    The Build Process

    1. Compilation
        -Preprocessing: The preprocessor handles directives (like #include) and prepares the code for compilation.
        -Compilation: The compiler translates the preprocessed code into assembly language.
        -Assembly: The assembler converts the assembly code into machine code, producing object files (.obj
    2. Linking
        -Linking: The linker combines object files and libraries into a single executable file (.exe).
        -Include Libraries: During linking, the linker resolves references to external libraries (like the C++ Standard Library).
        -Generate Executable: The final output is an executable file that can be run on the target system.
    3. Execution
        -Load into Memory: The operating system loads the executable into memory.
        -Execute: The CPU executes the program starting from the main function.
        -Terminate: The program runs until it reaches the end of main or encounters a return statement.

    */

#include <iostream> //Preprocessor directive to include the iostream standard library for input and output operations.

int main() { // Entry point of the program where execution begins.
    /*
    
    Statements are run in sequence from top to bottom and ends when reaching the closing brace of main function.
    This is a simple output statement using the standard output stream (cout) and endl to insert a newline after each statement.
    
    */
   
    std::cout << "Hello, World!" << std::endl; //Prints Hello, World! to the console. The << operator is known as the stream insertion operator.
    std::cout << "This is my first C++ program."; //This line will print in the same line as the next statement because there is no endl.
    std::cout << "I am excited to learn C++!" << std::endl; //Prints a third line to the console. 
    std::cout << "C++ is a powerful programming language." << std::endl; //Prints a fourth line to the console.

    // Using return 0 is a convention to indicate that the program ended successfully.
    return 0;
}