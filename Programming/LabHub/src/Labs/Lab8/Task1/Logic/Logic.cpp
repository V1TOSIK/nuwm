#include "Labs/Lab8/Task1/Logic/Logic.h"

namespace Labs::Lab8::Task1
{
    Result Logic::Calculate(const double values[4][4])
    {
        Result result{0.0, 0.0};

        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                if (j > i)
                {
                    result.sumAbove += values[i][j];
                }
                else if (i > j)
                {
                    result.sumBelow += values[i][j];
                }
            }
        }

        return result;
    }
}
