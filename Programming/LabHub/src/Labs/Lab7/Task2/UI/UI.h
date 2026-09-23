#pragma once

namespace Labs::Lab7::Task2
{
    struct Input
    {
        double values[7];
    };

    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(bool hasSecond, int secondIndex, double secondValue, bool hasFourth, int fourthIndex, double fourthValue);
    };
}
