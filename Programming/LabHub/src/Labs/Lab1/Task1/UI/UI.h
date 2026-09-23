#pragma once

namespace Labs::Lab1::Task1
{
    struct Input
    {
        float x;
        float k;
    };

    class UI
    {
        public:
            Input ShowInputs();
            void ShowResult(float x, float k, float result);
    };
}