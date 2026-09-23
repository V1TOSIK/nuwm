#pragma once

namespace Labs::Lab3::Task2
{
    struct Input
    {
        float k;
        float l;
    };

    class UI
    {
        public:
            Input ShowInputs();
            void ShowResult(float a, float b, float c, bool foundValue);
    };
}
