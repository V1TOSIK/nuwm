#pragma once

#include "Labs/Lab6/Task1/Input.h"

namespace Labs::Lab6::Task1
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(double root, int iterations, double check);
    };
}
