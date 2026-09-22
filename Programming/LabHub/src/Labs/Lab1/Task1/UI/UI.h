#pragma once

#include "Labs/Lab1/Task1/Input.h"

namespace Labs::Lab1::Task1
{
    class UI
    {
        public:
            Input ShowInputs();
            void ShowResult(float x, float k, float result);
    };
}