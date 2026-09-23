#include "Labs/Lab8/Task2/Logic/Logic.h"

using std::vector;

namespace Labs::Lab8::Task2
{
    vector<ColumnRange> Logic::Calculate(int rows, int cols, const double values[5][8])
    {
        vector<ColumnRange> result;
        result.reserve(static_cast<size_t>(cols));

        for (int col = 0; col < cols; ++col)
        {
            double maxValue = values[0][col];
            double minValue = values[0][col];

            for (int row = 1; row < rows; ++row)
            {
                if (values[row][col] > maxValue)
                {
                    maxValue = values[row][col];
                }
                if (values[row][col] < minValue)
                {
                    minValue = values[row][col];
                }
            }

            result.push_back(ColumnRange{maxValue, minValue, maxValue - minValue});
        }

        return result;
    }
}
