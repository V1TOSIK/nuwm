#include "Labs/Lab3/Task1/Logic/Logic.h"

#include <cmath>

using std::abs;
using std::exp;
using std::log;
using std::log10;
using std::pow;
using std::sin;
using std::sqrt;

namespace Labs::Lab3::Task1
{
    float Logic::CalculateY(float x)
    {
        if (x < 0.0f && x != -1.0f)
        {
            return exp(-2.5f * pow(x, 3)) + 1.0f;
        }

        if (x == -1.0f || x > 5.5f)
        {
            return (x - 1.0f) / (x - pow(sin(x), 2.0f));
        }

        if (x > 1.0f && x <= 5.5f)
        {
            return sqrt(abs(log10(x) - log(abs(x))));
        }

        if (x >= 0.0f && x <= 1.0f)
        {
            return 2.0f * x;
        }

        return 0.0f;
    }
}
