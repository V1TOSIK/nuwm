#pragma once

#include <vector>

namespace Labs::Lab4::Task3
{
    struct PointResult
    {
        float x;
        float y;
        float z;
        bool defined;
    };

    class Logic
    {
    public:
        std::vector<PointResult> Calculate(
            float xStart,
            float xEnd,
            float dx,
            float yStart,
            float yEnd,
            float dy
        );
        float CalculateZ(float x, float y);
    };
}
