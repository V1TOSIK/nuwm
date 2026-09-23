#pragma once

namespace Labs::Lab7::Task1
{
    struct Input
    {
        double values[12];
    };

    class UI
    {
        public:
            Input ShowInputs();
            void ShowResult(double sum, int count);
    };
}
