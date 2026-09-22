#pragma once

#include <vector>

namespace Labs::Lab9::Task1
{
    struct Result
    {
        int month;
        int bestFirm;
        double maxProfit;
    };

    class Logic
    {
    public:
        std::vector<Result> Calculate(int firmsCount, int monthsCount, const double profits[50][50]);
    };
}
