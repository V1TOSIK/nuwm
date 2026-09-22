#include "Labs/Lab7/Task1/Logic/Logic.h"

namespace Labs::Lab7::Task1
{
    Result Logic::Calculate(const double values[12])
    {
        Result result{0.0, 0};

        for (int i = 1; i < 12; i += 2)
        {
            if (values[i] < 0.0)
            {
                result.sum += values[i];
                ++result.count;
            }
        }

        return result;
    }
}
