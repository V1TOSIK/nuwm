#pragma once

namespace Labs::Lab7::Task1
{
    struct Result
    {
        double sum;
        int count;
    };

    class Logic
    {
    public:
        Result Calculate(const double values[12]);
    };
}
