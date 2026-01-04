/*
Precedence and Associativity in C++
This program is intended to demonstrate the concepts of operator precedence and associativity in C++.

Precedence determines the order in which operators are evaluated in expressions.
Associativity determines which direction (left-to-right or right-to-left) operators of the same precedence are evaluated.
Reference this table:  https://en.cppreference.com/w/cpp/language/operator_precedence.html

Order of operations:
1. Parentheses
2. Exponents
3. Multiplication and Division (from left to right)
4. Addition and Subtraction (from left to right)
*/

#include <iostream>
#include <cmath>

int main() { 
    //Variable declarations
    double a, b, c, d, e, f, g;

    //Expression to demonstrate precedence and associativity
    std::cout << "The expression we will be evaluating is a + b * c - d / e + f * g" << std::endl;
    std::cout <<"\n";
    std::cout << "Enter seven integers for (a, b, c, d, e, f, g): ";
    std::cin >> a >> b >> c >> d >> e >> f >> g;

    double result1 = a + b * c - d / e + f * g;
    std::cout << "Substituting our values the expression looks like:  " << a << " + " << b << " * " << c << " - " << d << " / " << e << " + " << f << " * " << g << std::endl;
    std::cout << "b * c " << "= " << b * c << std::endl;
    std::cout << "d / e " << "= " << d / e << std::endl;
    std::cout << "f * g " << "= " << f * g << std::endl;
    std::cout << "Then the expression becomes: " << a << " + " << (b * c) << " - " << (d / e) << " + " << (f * g) << std::endl;
    std::cout <<"\n";
    std::cout << "Now we perform addition and subtraction from left to right:" << std::endl;
    double step1 = a + (b * c);
    std::cout << a << " + " << (b * c) << " = " << step1 << std::endl;
    double step2 = step1 - (d / e);
    std::cout << step1 << " - " << (d / e) << " = " << step2 << std::endl;
    double finalResult = step2 + (f * g);
    std::cout << step2 << " + " << (f * g) << " = " << finalResult << std::endl;
    std::cout << "Result of the expression " << a << " + " << b << " * " << c << " - " << d << " / " << e << " + " << f << " * " << g << " is: " << finalResult << std::endl;
    std::cout <<"\n";
    double result2 = (a + b) * (c - d) / (e + f) + g;
    std::cout << "When we specify brackets in our expression we can force precedence and associativity to change the order of operations." << std::endl;
    std::cout << "For example the expression (a + b) * (c - d) / (e + f) + g" << std::endl;
    std::cout << "Substituting our values the expression looks like:  (" << a << " + " << b << ") * (" << c << " - " << d << ") / (" << e << " + " << f << ") + " << g << std::endl;
    std::cout << "Calculating the values inside the parentheses first:" << std::endl;
    double paren1 = a + b;
    std::cout << "(" << a << " + " << b << ") = " << paren1 << std::endl;
    double paren2 = c - d;
    std::cout << "(" << c << " - " << d << ") = " << paren2 << std::endl;
    double paren3 = e + f;
    
    std::cout << "(" << e << " + " << f << ") = " << paren3 << std::endl;
    std::cout << "Now the expression becomes: " << paren1 << " * " << paren2 << " / " << paren3 << " + " << g << std::endl;
    double mult = paren1 * paren2;
    std::cout << paren1 << " * " << paren2 << " = " << mult << std::endl;
    double div = mult / paren3;
    std::cout << mult << " / " << paren3 << " = " << div << std::endl;
    double finalResult2 = div + g;
    std::cout <<"\n";
    std::cout << "Result of the expression (" << a << " + " << b << ") * (" << c << " - " << d << ") / (" << e << " + " << f << ") + " << g << " is: " << finalResult2 << std::endl;

    return 0;
}