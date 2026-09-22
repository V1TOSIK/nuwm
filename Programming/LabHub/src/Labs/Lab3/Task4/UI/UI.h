#pragma once

#include "Labs/Lab3/Task4/Input.h"

namespace Labs::Lab3::Task4
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(float average, float minProfit, float difference);
    };
}
