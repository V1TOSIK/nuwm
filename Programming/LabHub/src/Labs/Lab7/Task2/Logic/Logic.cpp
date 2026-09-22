#include "Labs/Lab7/Task2/Logic/Logic.h"

namespace Labs::Lab7::Task2
{
    Result Logic::Calculate(const double values[7])
    {
        Result result{false, false, -1, -1, 0.0, 0.0};
        int negativeCount = 0;

        for (int i = 0; i < 7; ++i)
        {
            if (values[i] < 0.0)
            {
                ++negativeCount;

                if (negativeCount == 2)
                {
                    result.hasSecond = true;
                    result.secondIndex = i + 1;
                    result.secondValue = values[i];
                }
                else if (negativeCount == 4)
                {
                    result.hasFourth = true;
                    result.fourthIndex = i + 1;
                    result.fourthValue = values[i];
                    break;
                }
            }
        }

        return result;
    }
}
