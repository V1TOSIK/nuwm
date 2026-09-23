#pragma once

namespace Labs::Lab6::Task3
{
    struct Input
    {
        double x;
        double eps;
    };

    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(double x, double sum, int iterations, double check);
    };
}
