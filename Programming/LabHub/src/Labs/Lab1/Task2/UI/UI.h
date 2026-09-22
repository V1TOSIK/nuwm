#pragma once

#include "Labs/Lab1/Task2/Input.h"

namespace Labs::Lab1::Task2
{
    class UI
    {
        public:
            Input ShowInputs();
            void ShowResult(float x, float c, bool result);
    };
}