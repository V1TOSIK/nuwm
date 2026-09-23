#pragma once

namespace Labs::Lab3::Task3
{
    struct Input
    {
        float x;
        float y;
    };

    class UI
    {
        public:
            Input ShowInputs();
            void ShowResult(float x, float y, float r, bool isInside);
    };
}
