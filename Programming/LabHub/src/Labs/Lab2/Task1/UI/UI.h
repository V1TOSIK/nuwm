#pragma once

namespace Labs::Lab2::Task1
{
    struct Input
    {
        float a;
        float b;
    };

    class UI
    {
        public:
            Input ShowInputs();
            void ShowResult(float a, float b, float result);
    };
}
