#pragma once

#include "Labs/Lab5/Task3/Input.h"

namespace Labs::Lab5::Task3
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(double result);
    };
}
