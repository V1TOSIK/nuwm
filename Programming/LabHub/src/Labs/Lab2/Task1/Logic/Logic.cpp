#define M_PI 3.14159265
#include "Labs/Lab2/Task1/Logic/Logic.h"
#include <cmath>

using std::abs;
using std::atan;
using std::exp;
using std::log10;
using std::pow;
using std::sqrt;

namespace Labs::Lab2::Task1
{
    float Logic::CalculateResult(float a, float b)
    {
        const float x = (M_PI / 2.0f) - atan(
            (exp(a) + exp(1.0f / b)) / (sqrt(a + exp(1.0f)))
        );

        const float y = 2.0f * a * pow(a + b, 1.0f / 3.0f);

        return (abs(x - 1.0f) + exp(-y)) /
               (12.34f - log10(sqrt(abs(x))));
    }
}
