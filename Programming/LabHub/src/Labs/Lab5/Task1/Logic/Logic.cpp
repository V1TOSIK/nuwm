#include "Labs/Lab5/Task1/Logic/Logic.h"

#include <cmath>

namespace Labs::Lab5::Task1
{
    double Logic::CalculateSum(int start, int end)
    {
        double sum = 0.0;

        for (int k = start; k <= end; ++k)
        {
            const double sign = (k % 2 == 0) ? 1.0 : -1.0;
            const double numerator = static_cast<double>(k * k + 2 * k + 1);
            const double denominator = static_cast<double>(k + 4);
            sum += sign * (numerator / denominator);
        }

        return sum;
    }

    double Logic::CalculateProduct(int start, int end)
    {
        double product = 1.0;

        for (int k = start; k <= end; ++k)
        {
            const double numerator = std::pow(static_cast<double>(k), 3.0);
            const double denominator = static_cast<double>(k) + std::pow(2.0, static_cast<double>(k));
            product *= numerator / denominator;
        }

        return product;
    }
}
