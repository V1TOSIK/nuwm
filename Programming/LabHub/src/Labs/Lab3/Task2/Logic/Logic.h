#pragma once

namespace Labs::Lab3::Task2
{
    class Logic
    {
    public:
        struct Values
        {
            float a;
            float b;
            float c;
        };

        Values CalculateValues(float k, float l);
    };
}
