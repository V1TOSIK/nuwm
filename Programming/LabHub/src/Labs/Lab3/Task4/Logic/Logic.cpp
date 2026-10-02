#include "Labs/Lab3/Task4/Logic/Logic.h"
#include <algorithm>
#include <cmath>

using std::min;
using std::abs;
using std::initializer_list;

namespace Labs::Lab3::Task4
{
    Logic::Stats Logic::CalculateStats(float a, float b, float c)
    {
        const float average = (a + b + c) / 3.0f;
        const float minProfit = TakeMin({a, b, c});
        const float difference = abs(average - minProfit);

        return {average, minProfit, difference};
    }

    float Logic::TakeMin(initializer_list<float> nums){
        float currentMin = *nums.begin();
        for (float num : nums)
        {
            if (num < currentMin){
                currentMin = num;
            }
        }
        return currentMin;
    }
}
