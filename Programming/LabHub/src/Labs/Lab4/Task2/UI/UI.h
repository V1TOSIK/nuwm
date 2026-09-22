#pragma once

#include "Labs/Lab4/Task2/Input.h"

namespace Labs::Lab4::Task2
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(float zStart, float zEnd, float dz, const float* values, int count);
    };
}
