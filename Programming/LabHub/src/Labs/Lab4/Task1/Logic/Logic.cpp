#include "Labs/Lab4/Task1/Logic/Logic.h"

#include <cmath>

namespace Labs::Lab4::Task1
{
    float Logic::CalculateFunction(float x)
    {
        if (std::abs(x + 2.0f) < 1e-6f)
        {
            return std::nanf("");
        }

        return (x + std::cos(2.0f * x)) / (x + 2.0f);
    }
}
