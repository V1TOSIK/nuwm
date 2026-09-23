#include "Labs/Lab7/Task4/Logic/Logic.h"

namespace Labs::Lab7::Task4
{
    Result Logic::Calculate(int count, const double salaries[100], double threshold)
    {
        Result result{{}, count > 0 && count <= 100};
        if (!result.valid)
            return result;

        for (int i = 0; i < count; ++i)
        {
            if (salaries[i] <= threshold)
            {
                result.employees.push_back(Employee{i + 1, salaries[i]});
            }
        }

        return result;
    }
}
