#pragma once

#include <vector>

namespace Labs::Lab8::Task3
{
    struct VectorLength
    {
        int index;
        double length;
    };

    class Logic
    {
    public:
        std::vector<VectorLength> Calculate(int vectorsCount, int dimension, const double values[6][20]);
    };
}
