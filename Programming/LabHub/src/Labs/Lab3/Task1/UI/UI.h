#pragma once

namespace Labs::Lab3::Task1
{
    struct Input
    {
        float x;
    };

    class UI
    {
        public:
            Input ShowInputs();
            void ShowResult(float x, float result);
    };
}
