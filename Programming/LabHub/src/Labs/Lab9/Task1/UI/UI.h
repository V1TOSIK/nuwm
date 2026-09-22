#pragma once

#include <vector>

#include "Labs/Lab9/Task1/Input.h"
#include "Labs/Lab9/Task1/Logic/Logic.h"

namespace Labs::Lab9::Task1
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(const std::vector<Result>& result);
    };
}
