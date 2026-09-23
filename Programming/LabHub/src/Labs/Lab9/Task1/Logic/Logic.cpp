#include "Labs/Lab9/Task1/Logic/Logic.h"

using std::vector;

namespace Labs::Lab9::Task1
{
    vector<Result> Logic::Calculate(int firmsCount, int monthsCount, const double profits[50][50])
    {
        vector<Result> results;
        results.reserve(static_cast<size_t>(monthsCount));

        for (int month = 0; month < monthsCount; ++month)
        {
            double maxProfit = profits[0][month];
            int bestFirm = 1;

            for (int firm = 1; firm < firmsCount; ++firm)
            {
                if (profits[firm][month] > maxProfit)
                {
                    maxProfit = profits[firm][month];
                    bestFirm = firm + 1;
                }
            }

            results.push_back({month + 1, bestFirm, maxProfit});
        }

        return results;
    }
}
