#pragma once

#include <vector>

namespace Labs::Lab4::Task2
{
    struct Result
    {
        std::vector<float> values;
    };

    class Logic
    {
    public:
        Result Calculate(float zStart, float zEnd, float dz);
        float CalculateFunction(float z);
    };
}
