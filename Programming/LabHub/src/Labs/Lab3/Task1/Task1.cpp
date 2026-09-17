#include "Labs/Lab3/Task1/Task1.h"
#include <iostream>
#include <cmath>

namespace Lab3Tasks
{
    void Task1::Execute() {
        float x, y;

        std::cout << "Enter x: ";
        std::cin >> x;

        if (x < 0 && x != -1)
        {
            y = std::exp(-2.5f * std::pow(x, 3)) + 1;
        }
        else if (x == -1 || x > 5.5f)
        {
            y = (x - 1) / (x - std::pow(std::sin(x), 2));
        }
        else if (x > 1 && x <= 5.5f)
        {
            y = std::sqrt(
                std::abs(std::log10(x) - std::log(std::abs(x)))
            );
        }
        else if (x >= 0 && x <= 1)
        {
            y = 2 * x;
        }

        std::cout << "x = " << x << '\n';
        std::cout << "y = " << y << '\n';
    }
}