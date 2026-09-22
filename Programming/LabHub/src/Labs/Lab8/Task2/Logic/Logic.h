#pragma once

#include <vector>

namespace Labs::Lab8::Task2
{
    struct ColumnRange
    {
        double maxValue;
        double minValue;
        double diff;
    };

    class Logic
    {
    public:
        std::vector<ColumnRange> Calculate(int rows, int cols, const double values[5][8]);
    };
}
