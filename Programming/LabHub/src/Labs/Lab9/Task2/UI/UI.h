#pragma once

#include "Labs/Lab9/Task2/Input.h"

namespace Labs::Lab9::Task2
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(double product);
    };
}
