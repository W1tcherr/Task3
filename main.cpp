#include <iostream>
#include "math_func.h"

int main() {
    unsigned int a,b;
    std::cout << "Enter first number: ";
    a = getValue();
    std::cout << "Enter second number: ";
    b = getValue();
    if(a >= b)
        std::cout << "\n NOK = " << getNOK(a,b) << std::endl;
    else
        std::cout << "\n NOK = " << getNOK(b,a) << std::endl;

    return 0;
}