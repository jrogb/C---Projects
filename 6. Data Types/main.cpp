/*
Data Types in C++
This program demonstrates different data types and the size of each in memory.

1. Primitive Data Types:
   - int: Integer type for whole numbers.
   - float: Floating-point type for decimal numbers.
   - double: Double-precision floating-point type for more precise decimal numbers.
   - char: Character type for single characters.
   - bool: Boolean type for true/false values.
2. Derived Data Types:
    - arrays: Collection of elements of the same type.
    - pointers: Variables that store memory addresses.
    - references: Aliases for existing variables.
    - functions: Blocks of code that perform specific tasks.
3. User-Defined Data Types:
    - struct: Custom data type that groups related variables.
    - class: Blueprint for creating objects with attributes and methods.
    - enum: Enumeration type for defining named integer constants.
4. Type Modifiers:
    - signed: Specifies that a variable can hold both positive and negative values.
    - unsigned: Specifies that a variable can only hold non-negative values.
    - short: Reduces the size of an integer type.
    - long: Increases the size of an integer type.
5. Type Inference:
    - auto: Automatically deduces the type of a variable from its initializer.
6. Void Type:
    - void: Represents the absence of a value, commonly used for functions that do not return a value.
*/

#include <iostream>
#include <string>
#include <iomanip> //For std::boolalpha, to print bool values as true/false

int main(){
    // Primitive Data Types
        // Integers
        //Int are stored in 4 bytes (32 bits)
    int number_of_stars; //Garbage value not empty
    int number_of_moons {}; //Initialized to 0
    int number_of_planets {14}; //Initialized to 14
    int star_system_size {number_of_stars + number_of_moons + number_of_planets}; //Initialized using an expression

        // Floating-point numbers (fractional numbers)
    float pi {3.14f}; //'f' suffix indicates a float literal, has a precision of about 7 decimal digits
    std::cout << "Size of float literal 3.14f: " << sizeof(3.14f) << " bytes" << std::endl;
    double gravity {9.81}; //Default is double, has a precision of about 15 decimal digits
    std::cout << "Size of double literal 9.81: " << sizeof(9.81) << " bytes" << std::endl;
    long double precise_value {3.141592653589793238L}; //'L' suffix indicates a long double literal, has a precision of about 18 decimal digits
    std::cout << "Size of long double literal 3.141592653589793238L: " << sizeof(3.141592653589793238L) << " bytes" << std::endl;
            //Control the precision of floating-point output
    std::cout.precision(16); //Set precision to 16 digits
    std::cout << "Precise value of pi: " << precise_value << std::endl;
            //Scientific notation
    double scientific_notation {1.23e4}; //'e4' means 1.23 * 10^4, which is 12300
    double scientific_notation_small {5.67e-3}; //'e-3' means 5.67 * 10^-3, which is 0.00567
    std::cout << "Scientific notation 1.23e4: " << scientific_notation << std::endl;
    std::cout << "Scientific notation 5.67e-3: " << scientific_notation_small << std::endl;

            //Things you can do with floating-point numbers
    double number1 {5.6};
    double number2 {}; //Default initialized to 0.0
    double number3 {}; //Default initialized to 0.0

                // Infinity
    double result_infinity = number1 / number2; //Dividing by zero results in infinity
    std::cout << "Result of division by zero (infinity): " << result_infinity << std::endl;
                // Not a Number (NaN)
    double result_nan = number2 / number3; //0.0 / 0.0 results in NaN
    std::cout << "Result of 0.0 divided by 0.0 (NaN): " << result_nan << std::endl;    

        // Characters
        //Refer to ASCII table for size and values
    char initial {'A'}; //'A' is a character literal
    char number_char {37}; //ASCII value for '%'. The size of char is 1 byte (8 bits) and can store values from -128 to 127 (signed) or 0 to 255 (unsigned)
    std::cout << "Initial character: " << number_char << std::endl;
    std::cout << "number_char as an integer: " << static_cast<int>(number_char) << std::endl; //Casting char to int to see its ASCII value
        //Escape sequences
    char newline {'\n'}; //Escape sequence for newline
    char tab {'\t'}; //Escape sequence for tab

        // Boolean
    bool is_sunny {true}; //Initialized to true
    std::cout << "is_sunny: " << is_sunny << std::endl; //Prints 1 for true
    bool is_raining {false}; //Initialized to false
    std::cout << "is_raining: " << is_raining << std::endl; //Prints 0 for false
    std::cout << std::boolalpha; //Enable boolalpha to print bool values as true/false

        //Using boolean values in conditions
    if (is_sunny == true){
        std::cout << "It's a sunny day!" << std::endl;
    }else{
        std::cout << "It's not sunny today." << std::endl;
    }

    if (is_raining){
        std::cout << "It's raining!" << std::endl;
    }else{
        std::cout << "It's not raining." << std::endl;
    }

        // Output the values
    std::cout << "Number of Stars: " << number_of_stars << std::endl;
    std::cout << "Size of Stars variable: " << sizeof(number_of_stars) << " bytes" << std::endl;
    std::cout << "Number of Moons: " << number_of_moons << std::endl;
    std::cout << "Size of Moons variable: " << sizeof(number_of_moons) << " bytes" << std::endl;
    std::cout << "Number of Planets: " << number_of_planets << std::endl;
    std::cout << "Size of Planets variable: " << sizeof(number_of_planets) << " bytes" << std::endl;
    std::cout << "Star System Size: " << star_system_size << std::endl;
    std::cout << "Size of Star System Size variable: " << sizeof(star_system_size) << " bytes" << std::endl;
    std::cout << "Value of Pi: " << pi << std::endl;
    std::cout << "Size of Pi variable: " << sizeof(pi) << " bytes" << std::endl;
    std::cout << "Gravity: " << gravity << std::endl;
    std::cout << "Size of Gravity variable: " << sizeof(gravity) << " bytes" << std::endl;
    std::cout << "Precise Value of Pi: " << precise_value << std::endl;
    std::cout << "Size of Precise Value variable: " << sizeof(precise_value) << " bytes" << std::endl;
    std::cout << "Initial: " << initial << std::endl;
    std::cout << "Size of Initial variable: " << sizeof(initial) << " bytes" << std::endl;
    std::cout << "Is it sunny? " << std::boolalpha << is_sunny << std::endl;
    std::cout << "Size of is_sunny variable: " << sizeof(is_sunny) << " bytes" << std::endl;
    std::cout << "Is it raining? " << std::boolalpha << is_raining << std::endl;
    std::cout << "Size of is_raining variable: " << sizeof(is_raining) << " bytes" << std::endl;

    //Derived Data Types
        // Array
    int numbers[] = {1, 2, 3, 4, 5}; //Array of integers, size inferred.
    std::cout << "Size of numbers array: " << sizeof(numbers) << " bytes" << std::endl;
    std::cout << "First number in array: " << numbers[0] << std::endl;
    std::cout << "Size of first element in numbers array: " << sizeof(numbers[0]) << " bytes" << std::endl;
        // Pointer
    int value = 42; //Value to be pointed to
    int* ptr = &value; //Pointer to integer
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;
    std::cout << "Size of pointer: " << sizeof(ptr) << " bytes" << std::endl;
        // Reference
    int& ref = value; //Reference to integer
    std::cout << "Value referred to by ref: " << ref << std::endl;
    std::cout << "Size of reference to integer: " << sizeof(ref) << " bytes" << std::endl;
        // Function
    auto add = [](int a, int b) { return a + b; }; //Lambda function to add two integers
    std::cout << "Sum of 5 and 10: " << add(5, 10) << std::endl;
    std::cout << "Size of function object: " << sizeof(add) << " bytes" << std::endl;

    //User-Defined Data Types
        // Struct
    struct Point {
        int x;
        int y;
    }; //Define struct Point
    Point p1 {10, 20}; //Initialize Point p1
    std::cout << "Point p1: (" << p1.x << ", " << p1.y << ")" << std::endl;
    std::cout << "Size of Point struct: " << sizeof(p1) << " bytes" << std::endl;
        // Class
    class Rectangle {
    public:
        int width;
        int height;
        int area() { return width * height; }
    }; //Define class Rectangle 
    Rectangle rect {5, 10}; //Initialize Rectangle rect
    std::cout << "Area of rectangle: " << rect.area() << std::endl;
    std::cout << "Size of Rectangle class: " << sizeof(rect) << " bytes" << std::endl;
        // Enum
    enum Color { RED, GREEN, BLUE }; //Define enum Color
    Color favorite_color = GREEN; //Initialize favorite_color
    std::cout << "Favorite color (GREEN=1): " << favorite_color << std::endl;
    std::cout << "Size of Color enum: " << sizeof(favorite_color) << " bytes" << std::endl;
    //Type Modifiers
        // Signed and Unsigned
    signed int signed_num = -10; //Typically 4 bytes to store negative values
    unsigned int unsigned_num = 10; //Typically 4 bytes to store only non-negative values
    std::cout << "Signed number: " << signed_num << std::endl;
    std::cout << "Unsigned number: " << unsigned_num << std::endl;
        
        // Short and Long
        //These modifiers only apply to integer types
        //2 byte variables range −32,767 to +32,767
    short short_var {-32768};
    short int short_num = 32000;
    signed short signed_short {455};
    signed short int signed_short_int {-456};
    unsigned short int unsiggned_short_int {456};
        //4 byte variables range −2,147,483,647 to +2,147,483,647
    int int_var {88};
    signed signed_var {-89};
    signed int signed_int_var {90};
    unsigned int unsigned_int_var {91};
        //8 byte variables range −9,223,372,036,854,775,807 to +9,223,372,036,854,775,807
    long long long_long_var {1234567890};
    long long int long_int_var {1234567891};
    signed long long signed_long_var {-1234567892};
    signed long long int signed_long_int_var {-1234567893};
    unsigned long long int unsigned_long_int_var {1234567894};
    
    //Type Inference
        // Auto
    auto inferred_int {100}; //Inferred as int
    auto inferred_double {3.14159}; //Inferred as double
    auto inferred_string {"Hello, World!"}; //Inferred as const char*
    auto inferred_bool {true}; //Inferred as bool
    auto inferred_float {2.718f}; //Inferred as float
    auto inferred_long {1234567890L}; //Inferred as long
    auto inferred_unsigned {42u}; //Inferred as unsigned int
    auto inferred_char {'C'}; //Inferred as char

    std::cout << "Inferred int: " << inferred_int << std::endl;
    std::cout << "Inferred double: " << inferred_double << std::endl;
    
    //Void Type
        // Function that returns void
    auto print_message = []() -> void {
        std::cout << "This function returns void." << std::endl;
    }; //Define lambda function
    print_message();

    //We can calculate the total size off all variables using sizeof operator and display it in the terminal.
    size_t total_size = sizeof(number_of_stars) + sizeof(number_of_moons) + sizeof(number_of_planets) +
                        sizeof(pi) + sizeof(gravity) + sizeof(precise_value) +
                        sizeof(initial) + sizeof(newline) + sizeof(tab) +
                        sizeof(is_sunny) + sizeof(is_raining) +
                        sizeof(numbers) + sizeof(ptr) + sizeof(ref) +
                        sizeof(p1) + sizeof(rect) + sizeof(favorite_color) +
                        sizeof(signed_num) + sizeof(unsigned_num) +
                        sizeof(short_var) + sizeof(int_var) + sizeof(long_long_var) +
                        sizeof(inferred_int) + sizeof(inferred_double);

    std::cout << "Total size of all variables in memory: " << total_size << " bytes" << std::endl;
    
    std::cout << "Size of a int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of a float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of a double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of a char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of a bool: " << sizeof(bool) << " bytes" << std::endl;


    return 0;
}
