#pragma once

#include "Labs/Lab6/Task2/Input.h"

namespace Labs::Lab6::Task2
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(double root, int iterations);
        void ShowConvergentResult(double root, int iterations);
    };
}
