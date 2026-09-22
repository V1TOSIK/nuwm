#pragma once

namespace Labs::Lab6::Task3
{
    struct SumCalculationResult
    {
        double sum;
        int iterations;
    };

    class Logic
    {
    public:
        SumCalculationResult CalculateSum(double x, double eps);
        double CalculateCheck(double x);
    };
}
