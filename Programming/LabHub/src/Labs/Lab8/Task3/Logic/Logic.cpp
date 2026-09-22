#include "Labs/Lab8/Task3/Logic/Logic.h"

#include <cmath>

namespace Labs::Lab8::Task3
{
    std::vector<VectorLength> Logic::Calculate(int vectorsCount, int dimension, const double values[6][20])
    {
        std::vector<VectorLength> result;
        result.reserve(static_cast<size_t>(vectorsCount));

        for (int i = 0; i < vectorsCount; ++i)
        {
            double sumSquares = 0.0;
            for (int j = 0; j < dimension; ++j)
            {
                sumSquares += values[i][j] * values[i][j];
            }

            result.push_back(VectorLength{i + 1, std::sqrt(sumSquares)});
        }

        return result;
    }
}
