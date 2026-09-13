#include "Labs/Lab1/Task1/Task1.h"
#include <iostream>
#include <cmath>

namespace Lab1Tasks
{
    void Task1::Execute() {
        float x, k, result;
        std::cout << "x = ";
        std::cin >> x;
        std::cout << "\nk = ";
        std::cin >> k;
        std::cout << std::endl;
        result = CalculateR(x, k);
        std::cout << "x = " << x << '\t'
                  << "k = " << k << '\n';
        std::cout << "Result = " << result << '\n';
    }
    
    float Task1::CalculateR(float x, float k) {
        // Чисельник
        float ctg_arg = (x + k) / (k + 1.0f);
        float numerator = (1.0f / std::tan(ctg_arg)) - std::sqrt(std::abs(std::log(x) - std::log(k) + 1.3f));
    
        // Знаменник
        float sin_val = std::sin(std::exp(-k));
        float sin4 = std::pow(sin_val, 4.0f);
    
        float asin_val = std::asin(1.0f / k);
        float asin2 = asin_val * asin_val;
    
        float denominator = sin4 + asin2;
    
        return numerator / denominator;
    }
}