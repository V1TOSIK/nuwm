#pragma once

#include "Labs/Lab7/Task2/Input.h"

namespace Labs::Lab7::Task2
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(bool hasSecond, int secondIndex, double secondValue, bool hasFourth, int fourthIndex, double fourthValue);
    };
}
