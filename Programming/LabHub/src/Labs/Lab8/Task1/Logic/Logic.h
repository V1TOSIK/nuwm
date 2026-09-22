#pragma once

namespace Labs::Lab8::Task1
{
    struct Result
    {
        double sumAbove;
        double sumBelow;
    };

    class Logic
    {
    public:
        Result Calculate(const double values[4][4]);
    };
}
