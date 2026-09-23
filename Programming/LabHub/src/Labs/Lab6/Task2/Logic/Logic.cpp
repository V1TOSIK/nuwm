#include "Labs/Lab6/Task2/Logic/Logic.h"

#include <cmath>

using std::log10;
using std::pow;
using std::abs;
using std::isinf;
using std::isnan;

namespace Labs::Lab6::Task2
{
    Result Logic::Calculate(double x0, double eps)
    {
        double xCurr = x0;
        double xNext = 0.0;
        int iterations = 0;
        constexpr int maxIterations = 50;

        while (true)
        {
            xNext = Phi(xCurr);
            ++iterations;

            if (isnan(xNext) || isinf(xNext) || abs(xNext) > 1e6 || iterations >= maxIterations)
            {
                xCurr = x0;
                iterations = 0;

                do
                {
                    xNext = PhiConvergent(xCurr);
                    ++iterations;
                    const double diff = abs(xNext - xCurr);
                    xCurr = xNext;

                    if (diff < eps)
                        break;
                }
                while (iterations < maxIterations);

                return {xNext, iterations, true};
            }

            if (abs(xNext - xCurr) < eps)
                return {xNext, iterations, false};

            xCurr = xNext;
        }
    }

    double Logic::Phi(double x)
    {
        return 0.5 * (100.0 - pow(10.0, x));
    }

    double Logic::PhiConvergent(double x)
    {
        return log10(100.0 - 2.0 * x);
    }
}
