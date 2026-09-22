#pragma once

#include "Labs/Lab4/Task3/Input.h"

namespace Labs::Lab4::Task3
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(float xStart, float xEnd, float dx, float yStart, float yEnd, float dy);
    };
}
