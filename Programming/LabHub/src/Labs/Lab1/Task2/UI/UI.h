#pragma once

namespace Labs::Lab1::Task2
{
    struct Input
    {
        float x;
        float c;
    };

    class UI
    {
        public:
            Input ShowInputs();
            void ShowResult(float x, float c, bool result);
    };
}