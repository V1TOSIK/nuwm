#include "Labs/Lab6/Task2/Logic/Logic.h"

#include <cmath>

namespace Labs::Lab6::Task2
{
    double Logic::Phi(double x)
    {
        return 0.5 * (100.0 - std::pow(10.0, x));
    }

    double Logic::PhiConvergent(double x)
    {
        return std::log10(100.0 - 2.0 * x);
    }
}
