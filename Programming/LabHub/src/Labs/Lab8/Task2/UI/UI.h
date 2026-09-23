#pragma once

#include "Labs/Lab8/Task2/Logic/Logic.h"
#include <vector>

namespace Labs::Lab8::Task2
{
    struct Input
    {
        int rows;
        int cols;
        double values[5][8];
    };

    class UI
    {
        public:
            Input ShowInputs();
            void ShowResult(const std::vector<ColumnRange>& ranges);
    };
}
