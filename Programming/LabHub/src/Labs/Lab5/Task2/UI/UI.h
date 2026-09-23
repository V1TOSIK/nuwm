#pragma once

namespace Labs::Lab5::Task2
{
    struct Input
    {
        int startNumber;
        int endNumber;
    };

    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(int startNumber, int endNumber, unsigned long long product);
    };
}
