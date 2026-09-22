#pragma once

#include "Labs/Lab4/Task1/Input.h"

namespace Labs::Lab4::Task1
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(float xStart, float xEnd, float dx, int n, const float* values, int count);
    };
}
