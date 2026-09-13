#include "Labs/Lab2/Task1/Task1.h"
#include <iostream>
#include <cmath>

namespace Lab2Tasks
{
    void Task1::Execute() {
        float a, b, result;
        std::cout << "a = ";
        std::cin >> a;
        std::cout << "\nb = ";
        std::cin >> b;
        std::cout << std::endl;
        result = CalculateZ(
            CalculateX(a, b),
            CalculateY(a, b)
        );
        std::cout << "a = " << a << '\t'
                  << "b = " << b << '\n';
        std::cout << "Result = " << result << '\n';
    }
    
    float Task1::CalculateX(float a, float b) {
        float arg = 
            (std::exp(a) + std::exp(1.0f / b))
            /
            (std::sqrt(a + std::exp(1.0f)));
        return (M_PI / 2) - std::atan(arg);
    }
    
    float Task1::CalculateY(float a, float b) {
        return 2 * a * std::pow(a + b, 1.0f / 3.0f);
    }
    
    float Task1::CalculateZ(float x, float y) {
        return 
        (std::abs(x - 1) + std::exp(y * -1))
        /
        (12.34f - std::log10(std::sqrt(std::abs(x))));
    }
}