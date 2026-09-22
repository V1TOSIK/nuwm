#include "Labs/Lab4/Task3/Logic/Logic.h"

#include <cmath>

namespace Labs::Lab4::Task3
{
    float Logic::CalculateZ(float x, float y)
    {
        const float tanValue = std::tan(x + y);
        return tanValue * tanValue + std::pow(x, 3.0f);
    }
}
