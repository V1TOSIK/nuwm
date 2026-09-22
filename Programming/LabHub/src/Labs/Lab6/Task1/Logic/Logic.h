#pragma once

namespace Labs::Lab6::Task1
{
    struct RootCalculationResult
    {
        double root;
        int iterations;
    };

    class Logic
    {
    public:
        RootCalculationResult CalculateRoot(double x, int n, double eps);
        double CalculateCheck(double x, int n);
    };
}
