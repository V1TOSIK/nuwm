#pragma once

namespace Labs::Lab7::Task2
{
    struct Result
    {
        bool hasSecond;
        bool hasFourth;
        int secondIndex;
        int fourthIndex;
        double secondValue;
        double fourthValue;
    };

    class Logic
    {
    public:
        Result Calculate(const double values[7]);
    };
}
