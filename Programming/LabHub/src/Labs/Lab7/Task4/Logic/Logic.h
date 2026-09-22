#pragma once

#include <vector>

namespace Labs::Lab7::Task4
{
    struct Employee
    {
        int number;
        double salary;
    };

    struct Result
    {
        std::vector<Employee> employees;
    };

    class Logic
    {
    public:
        Result Calculate(int count, const double salaries[100], double threshold);
    };
}
