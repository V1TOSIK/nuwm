#pragma once

namespace Labs::Lab9::Task2
{
    struct Input
    {
        double tensor[3][3][2];
    };

    class UI
    {
        public:
            Input ShowInputs();
            void ShowResult(double product);
    };
}
