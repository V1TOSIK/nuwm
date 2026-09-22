#pragma once

#include "Labs/Lab5/Task2/Input.h"

namespace Labs::Lab5::Task2
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(int startNumber, int endNumber, unsigned long long product);
    };
}
