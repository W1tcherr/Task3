#include <iostream>
#include "math_func.h"

unsigned int getValue()
{
    while(true)
    {
        unsigned int value;
        std::cin >> value;
        if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "\nWrong size, please re-enter.\n";
        }
        else
        {
            return value;
        }
    }
}

unsigned int getNOD(unsigned int m, unsigned int n) //gcd
{
    while (n != 0) {
        unsigned int r = m % n;
        m = n;
        n = r;
    }
    return m;
}

unsigned int getNOK(unsigned int m, unsigned int n) //lcm
{
    return (m*n)/getNOD(m,n);
}
