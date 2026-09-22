#pragma once

#include <vector>

#include "Labs/Lab8/Task2/Input.h"
#include "Labs/Lab8/Task2/Logic/Logic.h"

namespace Labs::Lab8::Task2
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(const std::vector<ColumnRange>& ranges);
    };
}
