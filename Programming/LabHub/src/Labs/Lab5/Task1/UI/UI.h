#pragma once

#include "Labs/Lab5/Task1/Input.h"

namespace Labs::Lab5::Task1
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(double sum, double product);
    };
}
