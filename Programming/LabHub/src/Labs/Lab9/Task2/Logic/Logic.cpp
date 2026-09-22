#include "Labs/Lab9/Task2/Logic/Logic.h"

namespace Labs::Lab9::Task2
{
    double Logic::Calculate(const double tensor[3][3][2])
    {
        const int diagLength = 2;
        double product = 1.0;

        for (int index = 0; index < diagLength; ++index)
        {
            product *= tensor[index][index][index];
        }

        return product;
    }
}
