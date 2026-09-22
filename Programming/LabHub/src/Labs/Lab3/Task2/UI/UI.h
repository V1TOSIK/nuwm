#pragma once

#include "Labs/Lab3/Task2/Input.h"

namespace Labs::Lab3::Task2
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(float a, float b, float c, bool foundValue);
    };
}
