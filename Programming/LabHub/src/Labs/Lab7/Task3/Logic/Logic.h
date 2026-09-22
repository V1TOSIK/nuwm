#pragma once

namespace Labs::Lab7::Task3
{
    struct Result
    {
        int positiveCount;
        int negativeCount;
        bool zeroFound;
    };

    class Logic
    {
    public:
        Result Calculate(int size, const double values[7]);
    };
}
