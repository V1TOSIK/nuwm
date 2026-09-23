#include "Labs/Lab4/Task1/Logic/Logic.h"

#include <cmath>

using std::abs;
using std::cos;
using std::nanf;
using std::size_t;

namespace Labs::Lab4::Task1
{
    Result Logic::Calculate(float xStart, float xEnd, float dx)
    {
        Result result;
        const int count = static_cast<int>((xEnd - xStart) / dx) + 1;
        result.values.resize(static_cast<size_t>(count));

        for (int i = 0; i < count; ++i)
        {
            result.values[static_cast<size_t>(i)] = CalculateFunction(xStart + i * dx);
        }

        return result;
    }

    float Logic::CalculateFunction(float x)
    {
        if (abs(x + 2.0f) < 1e-6f)
        {
            return nanf("");
        }

        return (x + cos(2.0f * x)) / (x + 2.0f);
    }
}
