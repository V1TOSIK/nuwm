#pragma once

#include "Labs/Lab7/Task1/Input.h"

namespace Labs::Lab7::Task1
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(double sum, int count);
    };
}
