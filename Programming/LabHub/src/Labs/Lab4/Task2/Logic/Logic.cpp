#include "Labs/Lab4/Task2/Logic/Logic.h"

#include <cmath>

namespace Labs::Lab4::Task2
{
    float Logic::CalculateFunction(float z)
    {
        const float halfPi = 1.57079632679f;

        if (z >= -2.0f && z <= 0.5f)
        {
            return z - std::sin(z);
        }

        if (z > 0.5f && z <= 3.0f)
        {
            return halfPi - std::atan(z - 0.3f);
        }

        return std::nanf("");
    }
}
