#pragma once

#include "Labs/Lab2/Task2/Input.h"

namespace Labs::Lab2::Task2
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(float a, float b, float c, float perimeter);
    };
}
