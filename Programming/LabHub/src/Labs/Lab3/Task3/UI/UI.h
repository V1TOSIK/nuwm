#pragma once

#include "Labs/Lab3/Task3/Input.h"

namespace Labs::Lab3::Task3
{
    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(float x, float y, bool isInside);
    };
}
