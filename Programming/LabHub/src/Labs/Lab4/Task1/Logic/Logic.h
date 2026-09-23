#pragma once

#include <vector>

namespace Labs::Lab4::Task1
{
    struct Result
    {
        std::vector<float> values;
    };

    class Logic
    {
    public:
        Result Calculate(float xStart, float xEnd, float dx);
        float CalculateFunction(float x);
    };
}
