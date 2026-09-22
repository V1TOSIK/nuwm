#include "Labs/Lab8/Task3/UI/UI.h"

#include <iomanip>
#include <iostream>

namespace Labs::Lab8::Task3
{
    Input UI::ShowInputs()
    {
        Input input{};

        std::cout << "Enter number of vectors m (1..6): ";
        std::cin >> input.vectorsCount;
        std::cout << "Enter vector dimension n: ";
        std::cin >> input.dimension;

        if (input.vectorsCount < 1 || input.vectorsCount > 6 || input.dimension < 1 || input.dimension > 20)
        {
            input.vectorsCount = 0;
            input.dimension = 0;
            return input;
        }

        std::cout << "Enter coordinates for each vector:\n";
        for (int i = 0; i < input.vectorsCount; ++i)
        {
            std::cout << "Vector #" << (i + 1) << ": ";
            for (int j = 0; j < input.dimension; ++j)
            {
                std::cin >> input.values[i][j];
            }
        }

        return input;
    }

    void UI::ShowResult(const std::vector<VectorLength>& lengths)
    {
        std::cout << std::fixed << std::setprecision(3);
        std::cout << "\nVector lengths:\n";

        double minLength = lengths.front().length;
        int minIndex = lengths.front().index;

        for (const auto& length : lengths)
        {
            std::cout << "Vector #" << length.index << ": " << length.length << "\n";
            if (length.length < minLength)
            {
                minLength = length.length;
                minIndex = length.index;
            }
        }

        std::cout << "\nVector with minimum length: #" << minIndex << " (length = " << minLength << ")\n";
    }
}
