#pragma once

#include "Labs/Lab8/Task3/Logic/Logic.h"
#include <vector>

namespace Labs::Lab8::Task3
{
    struct Input
    {
        int vectorsCount;
        int dimension;
        double values[6][20];
    };
    
    class UI
    {
        public:
            Input ShowInputs();
            void ShowResult(const std::vector<VectorLength>& lengths);

        private:
            void FillArray(double matrix[6][20], int count, int dim);
    };
}
