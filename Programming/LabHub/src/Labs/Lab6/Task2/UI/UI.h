#pragma once

#include "Labs/Lab6/Task2/Logic/Logic.h"

namespace Labs::Lab6::Task2
{
    struct Input
    {
        double x0;
        double eps;
    };

    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(const Result& result);
    };
}
