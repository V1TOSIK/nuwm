#pragma once

#include "Labs/Lab7/Task4/Logic/Logic.h"

namespace Labs::Lab7::Task4
{
    struct Input
    {
        int count;
        double salaries[100];
        double threshold;
    };

    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(const std::vector<Employee>& employees, double threshold, bool valid);
    };
}
