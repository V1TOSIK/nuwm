#pragma once

#include "Labs/Lab8/Task1/Input.h"

namespace Labs::Lab8::Task1
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(double sumAbove, double sumBelow);
    };
}
