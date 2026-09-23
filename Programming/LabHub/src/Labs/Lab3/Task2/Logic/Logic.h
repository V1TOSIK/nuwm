#pragma once

namespace Labs::Lab3::Task2
{
    struct Values
    {
        float a;
        float b;
        float c;
        bool foundValue;
    };

    class Logic
    {
        public:
            Values CalculateResult(float k, float l);
    };
}
