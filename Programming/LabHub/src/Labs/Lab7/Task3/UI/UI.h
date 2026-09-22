#pragma once

#include "Labs/Lab7/Task3/Input.h"

namespace Labs::Lab7::Task3
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(int positiveCount, int negativeCount, bool zeroFound);
    };
}
