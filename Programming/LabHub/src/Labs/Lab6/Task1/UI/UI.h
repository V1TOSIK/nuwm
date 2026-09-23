#pragma once

namespace Labs::Lab6::Task1
{
    struct Input
    {
        double x;
        int n;
        double eps;
    };

    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(double root, int iterations, double check);
    };
}
