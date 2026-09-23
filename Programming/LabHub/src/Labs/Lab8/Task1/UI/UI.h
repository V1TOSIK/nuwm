#pragma once

namespace Labs::Lab8::Task1
{
    struct Input
    {
        double values[4][4];
    };

    class UI
    {
        public:
            Input ShowInputs();
            void ShowResult(double sumAbove, double sumBelow);
    };
}
