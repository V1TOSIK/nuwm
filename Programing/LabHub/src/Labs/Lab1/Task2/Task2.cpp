#include "Labs/Lab1/Task2/Task2.h"
#include <iostream>
#include <cmath>

namespace Lab1Tasks
{
    void Task2::Execute() {
        float x, c;
        bool result;
        std::cout << "x = ";
        std::cin >> x;
        std::cout << "\nc = ";
        std::cin >> c;
        std::cout << std::endl;
        result = Calculate(x, c);
        std::cout << "x = " << x << '\t'
                  << "c = " << c << '\n';
        std::cout << "Result = " << (result ? "true" : "false") << '\n';
    }
    
    bool Task2::Calculate(float x, float c)
    {
        float inverseX = std::pow(x, -1);
    
        return (3 * x <= 0) ||
               (5 < inverseX && inverseX < c);
    }
}
