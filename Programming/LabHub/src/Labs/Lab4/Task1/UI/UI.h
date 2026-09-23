#pragma once

#include <vector>

namespace Labs::Lab4::Task1
{
    struct Input
    {
        float xStart;
        float xEnd;
        float dx;
        int n;
    };

    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(float xStart, float xEnd, float dx, int n, const std::vector<float>& values);
    };
}
