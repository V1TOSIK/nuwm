#pragma once

#include "Labs/Lab3/Task1/Input.h"

namespace Labs::Lab3::Task1
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(float x, float result);
    };
}
