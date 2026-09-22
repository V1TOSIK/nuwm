#pragma once

#include "Labs/Lab7/Task4/Input.h"
#include "Labs/Lab7/Task4/Logic/Logic.h"

namespace Labs::Lab7::Task4
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(const std::vector<Employee>& employees, double threshold);
    };
}
