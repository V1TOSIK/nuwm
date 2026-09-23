#pragma once

namespace Labs::Lab5::Task3
{
    struct Input
    {
        double z1;
        double deltaZ;
    };

    class UI
    {
    public:
        Input ShowInputs();
        void ShowResult(double result);
    };
}
