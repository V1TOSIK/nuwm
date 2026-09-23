#pragma once

namespace Labs::Lab2::Task2
{
    struct Input
    {
        float a;
        float b;
        float c;
    };

    class UI
    {
        public:
            Input ShowInputs();
            void ShowResult(float a, float b, float c, float perimeter);
    };
}
