#include "Labs/Lab3/Task4/Logic/Logic.h"
#include <algorithm>
#include <cmath>

using std::min;
using std::abs;

namespace Labs::Lab3::Task4
{
    Logic::Stats Logic::CalculateStats(float a, float b, float c)
    {
        const float average = (a + b + c) / 3.0f;
        const float minProfit = min({a, b, c});
        const float difference = abs(average - minProfit);

        return {average, minProfit, difference};
    }
}
