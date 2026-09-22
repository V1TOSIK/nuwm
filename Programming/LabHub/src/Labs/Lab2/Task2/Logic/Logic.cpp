#include "Labs/Lab2/Task2/Logic/Logic.h"

namespace Labs::Lab2::Task2
{
    float Logic::CalculatePerimeter(float a, float b, float c)
    {
        const bool isValid = a > 0.0f && b > 0.0f && c > 0.0f &&
                             (a + b > c) && (a + c > b) && (b + c > a);

        if (!isValid)
        {
            return -1.0f;
        }

        return a + b + c;
    }
}
