#pragma once

namespace Labs::Lab7::Task3
{
    struct Input
    {
        int size;
        double values[7];
    };

    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(int positiveCount, int negativeCount, bool zeroFound, bool valid);
    };
}
