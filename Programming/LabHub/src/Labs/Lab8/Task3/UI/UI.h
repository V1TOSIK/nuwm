#pragma once

#include <vector>

#include "Labs/Lab8/Task3/Input.h"
#include "Labs/Lab8/Task3/Logic/Logic.h"

namespace Labs::Lab8::Task3
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(const std::vector<VectorLength>& lengths);
    };
}
