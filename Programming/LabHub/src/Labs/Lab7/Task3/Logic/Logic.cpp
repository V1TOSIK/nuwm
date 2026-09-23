#include "Labs/Lab7/Task3/Logic/Logic.h"

namespace Labs::Lab7::Task3
{
    Result Logic::Calculate(int size, const double values[7])
    {
        Result result{0, 0, false, size > 0 && size <= 7};
        if (!result.valid)
            return result;

        for (int i = 0; i < size; ++i)
        {
            if (values[i] == 0.0)
            {
                result.zeroFound = true;
                break;
            }

            if (values[i] > 0.0)
            {
                ++result.positiveCount;
            }
            else if (values[i] < 0.0)
            {
                ++result.negativeCount;
            }
        }

        return result;
    }
}
