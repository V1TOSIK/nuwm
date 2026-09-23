#pragma once

namespace Labs::Lab6::Task2
{
    struct Result
    {
        double root;
        int iterations;
        bool usedConvergentFormula;
    };

    class Logic
    {
    public:
        Result Calculate(double x0, double eps);
        double Phi(double x);
        double PhiConvergent(double x);
    };
}
