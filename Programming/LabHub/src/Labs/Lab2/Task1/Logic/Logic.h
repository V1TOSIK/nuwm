#pragma once

namespace Labs::Lab2::Task1
{
    struct Result
    {
        float x;
        float y;
        float z;
    };

    class Logic
    {
    public:
        Result CalculateResult(float a, float b);
    };
}
