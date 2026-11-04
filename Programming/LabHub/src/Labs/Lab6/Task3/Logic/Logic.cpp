#include "Labs/Lab6/Task3/Logic/Logic.h"

#include <cmath>

using std::abs;
using std::sinh;

namespace Labs::Lab6::Task3
{
    SumCalculationResult Logic::CalculateSum(double x, double eps)
    {
        SumCalculationResult result{0.0, 0};

        double aK = x;
        double sum = 0.0;
        int k = 1;
        int count = 0;

        while (abs(aK) > eps)
        {
            sum += aK;
            ++count;

            aK = aK * (x * x) / (2.0 * k * (2.0 * k + 1.0));
            ++k;
        }

        result.sum = sum;
        result.iterations = count;
        return result;
    }

    double Logic::CalculateCheck(double x)
    {
        return sinh(x);
    }
}
