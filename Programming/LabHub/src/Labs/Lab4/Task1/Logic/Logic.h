#pragma once

#include <vector>

namespace Labs::Lab4::Task1
{
    struct Result
    {
        std::vector<float> values;
        std::vector<float> nValues;
    };

    class Logic
    {
        public:
            Result Calculate(float xStart, float xEnd, float dx, int n);
        private:
            float CalculateFunction(float x);
    };
}
