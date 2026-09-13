#include "Labs/Lab1/Task4/Task4.h"
#include <iostream>

namespace Lab1Tasks
{
    void Task4::Execute() {
        std::cout << "z=(exp(exp*lnx)-exp(-x)+0,12)/(sqrt(sin(y-1)))" << std::endl; 
        std::cout << "z=(exp(exp(log10(x)))-exp(x*-1)+0.12f)/(sqrt(sin(y-1)));" << std::endl; 
    }
}