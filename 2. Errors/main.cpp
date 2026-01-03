/*

Errors

1. Compile Time Errors:
   - Syntax Errors: Mistakes in the code that violate the rules of the C++ language, such as missing semicolons or mismatched parentheses.
2. Linker Errors:
   - Undefined References: Happen when the code references functions or variables that are declared but not defined, often due to missing source files or libraries during the linking stage.
3. Runtime Errors:
   - Division by Zero: Attempting to divide a number by zero, which is undefined and causes the program to crash.

*/

#include <iostream>

int main() {

    /*
    Compile Time Error the line below will cause a syntax error due to the missing semicolon.
    This error will be caught by the compiler before the compilation process is complete.
    No build artifact (executable) will be generated until the error is fixed.
    */
    std::cout << "Hello, World!" << std::endl

    /*
    Linker Error Example: The line below references an undefined function 'undefinedFunction'.
    This error will be caught during the linking stage after successful compilation.
    */
    undefinedFunction();

    /*
    Runtime Error Example: The line below will cause a division by zero error.
    This error will only be encountered when the program is executed.
    */
    int a = 10;
    int b = 0;
    int c = a / b; // Division by zero error
    std::cout << "Result: " << c << std::endl;

    return 0;
}