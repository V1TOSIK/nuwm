#include "Labs/Lab3/Task4/Logic/Logic.h"

#include <algorithm>
#include <cmath>

namespace Labs::Lab3::Task4
{
    Logic::Stats Logic::CalculateStats(float a, float b, float c)
    {
        const float average = (a + b + c) / 3.0f;
        const float minProfit = std::min({a, b, c});
        const float difference = std::abs(average - minProfit);

        return {average, minProfit, difference};
    }
}
