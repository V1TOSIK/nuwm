#include "Labs/Lab8/Task2/UI/UI.h"

#include <iomanip>
#include <iostream>

namespace Labs::Lab8::Task2
{
    Input UI::ShowInputs()
    {
        Input input{};

        std::cout << "Enter number of rows m (1..5): ";
        std::cin >> input.rows;
        std::cout << "Enter number of columns n (1..8): ";
        std::cin >> input.cols;

        if (input.rows < 1 || input.rows > 5 || input.cols < 1 || input.cols > 8)
        {
            input.rows = 0;
            input.cols = 0;
            return input;
        }

        std::cout << "Enter matrix A (" << input.rows << "x" << input.cols << "):\n";
        for (int i = 0; i < input.rows; ++i)
        {
            for (int j = 0; j < input.cols; ++j)
            {
                std::cin >> input.values[i][j];
            }
        }

        return input;
    }

    void UI::ShowResult(const std::vector<ColumnRange>& ranges)
    {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nResults by column:\n";

        for (size_t i = 0; i < ranges.size(); ++i)
        {
            std::cout << "Column #" << (i + 1) << ": max = " << ranges[i].maxValue
                      << ", min = " << ranges[i].minValue
                      << ", diff = " << ranges[i].diff << "\n";
        }
    }
}
