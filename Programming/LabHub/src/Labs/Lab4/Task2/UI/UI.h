#pragma once

#include <vector>

namespace Labs::Lab4::Task2
{
    struct Input
    {
        float zStart;
        float zEnd;
        float dz;
    };

    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(float zStart, float dz, const std::vector<float>& values);
    };
}
