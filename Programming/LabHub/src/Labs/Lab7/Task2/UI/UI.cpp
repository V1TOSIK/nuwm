#include "Labs/Lab7/Task2/UI/UI.h"

#include <iomanip>
#include <iostream>

namespace Labs::Lab7::Task2
{
    Input UI::ShowInputs()
    {
        Input input{};

        std::cout << "Enter 7 elements of array B:\n";
        for (int i = 0; i < 7; ++i)
        {
            std::cin >> input.values[i];
        }

        return input;
    }

    void UI::ShowResult(bool hasSecond, int secondIndex, double secondValue, bool hasFourth, int fourthIndex, double fourthValue)
    {
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "\nResults:\n";

        if (hasSecond)
        {
            std::cout << "2nd negative element: value = " << secondValue << ", position = " << secondIndex << "\n";
        }

        if (hasFourth)
        {
            std::cout << "4th negative element: value = " << fourthValue << ", position = " << fourthIndex << "\n";
        }

        if (!hasSecond && !hasFourth)
        {
            std::cout << "There are fewer than two negative elements.\n";
        }
    }
}
