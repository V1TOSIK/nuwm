#include "Labs/Lab5/Task2/Logic/Logic.h"

namespace Labs::Lab5::Task2
{
    unsigned long long Logic::CalculateProductOfOddNumbers(int startNumber, int endNumber)
    {
        if (startNumber > endNumber)
        {
            const int temp = startNumber;
            startNumber = endNumber;
            endNumber = temp;
        }

        unsigned long long product = 1ULL;

        for (int i = startNumber; i <= endNumber; ++i)
        {
            if (i > 0 && i % 2 != 0)
            {
                product *= static_cast<unsigned long long>(i);
            }
        }

        return product;
    }
}
