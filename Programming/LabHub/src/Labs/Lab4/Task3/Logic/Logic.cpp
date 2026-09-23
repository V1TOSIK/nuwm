#include "Labs/Lab4/Task3/Logic/Logic.h"

#include <cmath>

using std::abs;
using std::cos;
using std::pow;
using std::tan;
using std::vector;

namespace Labs::Lab4::Task3
{
    vector<PointResult> Logic::Calculate(
        float xStart,
        float xEnd,
        float dx,
        float yStart,
        float yEnd,
        float dy
    )
    {
        vector<PointResult> result;
        const float eps = 1e-5f;

        for (float x = xStart; x <= xEnd + eps; x += dx)
        {
            for (float y = yStart; y <= yEnd + eps; y += dy)
            {
                const bool defined = abs(cos(x + y)) >= eps;
                result.push_back({x, y, defined ? CalculateZ(x, y) : 0.0f, defined});
            }
        }

        return result;
    }

    float Logic::CalculateZ(float x, float y)
    {
        const float tanValue = tan(x + y);
        return tanValue * tanValue + pow(x, 3.0f);
    }
}
