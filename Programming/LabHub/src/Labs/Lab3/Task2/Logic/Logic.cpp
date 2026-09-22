#include "Labs/Lab3/Task2/Logic/Logic.h"

namespace Labs::Lab3::Task2
{
    Logic::Values Logic::CalculateValues(float k, float l)
    {
        return {
            (l + k) / 5.0f,
            l * k - 3.5f,
            (l - k) / k
        };
    }
}
