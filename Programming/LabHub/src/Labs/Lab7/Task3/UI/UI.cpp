#include "Labs/Lab7/Task3/UI/UI.h"

#include <iomanip>
#include <iostream>

namespace Labs::Lab7::Task3
{
    Input UI::ShowInputs()
    {
        Input input{};

        std::cout << "Enter the array size (1..7): ";
        std::cin >> input.size;

        if (input.size < 1 || input.size > 7)
        {
            input.size = 0;
            return input;
        }

        std::cout << "Enter " << input.size << " elements (at least one zero is expected):\n";
        for (int i = 0; i < input.size; ++i)
        {
            std::cin >> input.values[i];
        }

        return input;
    }

    void UI::ShowResult(int positiveCount, int negativeCount, bool zeroFound)
    {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nResults:\n";

        if (zeroFound)
        {
            std::cout << "Positive count before first zero: " << positiveCount << "\n";
            std::cout << "Negative count before first zero: " << negativeCount << "\n";
        }
        else
        {
            std::cout << "No zero found in the array.\n";
        }
    }
}
