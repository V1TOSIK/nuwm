#pragma once

#include "Labs/Lab6/Task3/Input.h"

namespace Labs::Lab6::Task3
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(double x, double sum, int iterations, double check);
    };
}
