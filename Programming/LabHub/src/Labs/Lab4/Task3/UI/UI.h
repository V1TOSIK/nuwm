#pragma once

#include <vector>
#include "Labs/Lab4/Task3/Logic/Logic.h"

namespace Labs::Lab4::Task3
{
    struct Input
    {
        float xStart;
        float xEnd;
        float dx;
        float yStart;
        float yEnd;
        float dy;
    };

    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(const std::vector<PointResult>& result);
    };
}
