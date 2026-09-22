#include "Labs/Lab3/Task3/Logic/Logic.h"

namespace Labs::Lab3::Task3
{
    bool Logic::IsInsideSemiCircle(float x, float y, float radius)
    {
        return y >= 0.0f && (x * x + y * y) <= (radius * radius);
    }
}
