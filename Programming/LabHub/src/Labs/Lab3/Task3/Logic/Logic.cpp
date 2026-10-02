#include "Labs/Lab3/Task3/Logic/Logic.h"

namespace Labs::Lab3::Task3
{
    bool Logic::IsInsideSemiCircle(float x, float y)
    {
        return (
            x >= 0.0f &&
            x <= 1.0f &&
            y >= 0.0f &&
            y <= 1.0f &&
            (x + y) >= 1.0f);
    }
}