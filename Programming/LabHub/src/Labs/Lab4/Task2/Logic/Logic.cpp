#include "Labs/Lab4/Task2/Logic/Logic.h"

#include <cmath>

using std::atan;
using std::nanf;
using std::sin;
using std::size_t;

namespace Labs::Lab4::Task2
{
    Result Logic::Calculate(float zStart, float zEnd, float dz)
    {
        Result result;
        const int count = static_cast<int>((zEnd - zStart) / dz) + 1;
        result.values.resize(static_cast<size_t>(count));

        for (int i = 0; i < count; ++i)
        {
            result.values[static_cast<size_t>(i)] = CalculateFunction(zStart + i * dz);
        }

        return result;
    }

    float Logic::CalculateFunction(float z)
    {
        const float halfPi = 1.57079632679f;

        if (z >= -2.0f && z <= 0.5f)
        {
            return z - sin(z);
        }

        if (z > 0.5f && z <= 3.0f)
        {
            return halfPi - atan(z - 0.3f);
        }

        return nanf("");
    }
}
