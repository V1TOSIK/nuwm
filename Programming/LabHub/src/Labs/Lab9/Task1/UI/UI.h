#pragma once

#include "Labs/Lab9/Task1/Logic/Logic.h"
#include <vector>

namespace Labs::Lab9::Task1
{
    struct Input
    {
        int firmsCount;
        int monthsCount;
        double profits[50][50];
    };

    class UI
    {
        public:
            Input ShowInputs();
            void ShowResult(const std::vector<Result>& result);
    };
}
