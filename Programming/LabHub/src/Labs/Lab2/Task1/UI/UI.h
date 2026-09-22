#pragma once

#include "Labs/Lab2/Task1/Input.h"

namespace Labs::Lab2::Task1
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(float a, float b, float result);
    };
}
