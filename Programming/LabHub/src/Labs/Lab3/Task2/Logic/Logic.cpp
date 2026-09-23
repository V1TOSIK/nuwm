#include "Labs/Lab3/Task2/Logic/Logic.h"

namespace Labs::Lab3::Task2
{
    Values Logic::CalculateResult(float k, float l)
    {
        float a = (l + k) / 5.0f;
        float b = l * k - 3.5f;
        float c = (l - k) / k;

        bool foundValue =
            (a < -1.0f || a > 5.0f) ||
            (b < -1.0f || b > 5.0f) ||
            (c < -1.0f || c > 5.0f);

        return {
            a,
            b,
            c,
            foundValue
        };
    }
}