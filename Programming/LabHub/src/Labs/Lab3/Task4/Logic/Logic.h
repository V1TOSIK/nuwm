#pragma once

#include <initializer_list>

namespace Labs::Lab3::Task4
{
    class Logic
    {
    public:
        struct Stats
        {
            float average;
            float minProfit;
            float difference;
        };

        Stats CalculateStats(float a, float b, float c);
        
    private:
        float TakeMin(std::initializer_list<float> nums);
    };

}
