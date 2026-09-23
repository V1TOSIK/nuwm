#pragma once

namespace Labs::Lab3::Task4
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
            void ShowResult(float average, float minProfit, float difference);
    };
}
