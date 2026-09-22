#include "Labs/Lab6/Task1/Logic/Logic.h"

#include <cmath>

namespace Labs::Lab6::Task1
{
    RootCalculationResult Logic::CalculateRoot(double x, int n, double eps)
    {
        RootCalculationResult result{0.0, 0};

        if (n <= 0)
        {
            return result;
        }

        double yCurr = x;
        double yNext = 0.0;
        double diff = 0.0;

        do
        {
            yNext = (1.0 / static_cast<double>(n)) * (x / std::pow(yCurr, n - 1) + (n - 1) * yCurr);
            diff = std::abs(yNext - yCurr);
            yCurr = yNext;
            ++result.iterations;
        }
        while (diff > eps);

        result.root = yNext;
        return result;
    }

    double Logic::CalculateCheck(double x, int n)
    {
        return std::pow(x, 1.0 / static_cast<double>(n));
    }
}
