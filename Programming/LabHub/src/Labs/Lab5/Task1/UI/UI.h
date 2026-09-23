#pragma once

namespace Labs::Lab5::Task1
{
    struct Input
    {
        int kStart;
        int kEnd;
        int m;
        int n;
    };

    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(double sum, double product);
    };
}
