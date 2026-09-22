#include "Labs/Lab7/Task1/UI/UI.h"

#include <iomanip>
#include <iostream>

namespace Labs::Lab7::Task1
{
    Input UI::ShowInputs()
    {
        Input input{};

        std::cout << "Enter 12 elements of array X:\n";
        for (int i = 0; i < 12; ++i)
        {
            std::cin >> input.values[i];
        }

        return input;
    }

    void UI::ShowResult(double sum, int count)
    {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nResults:\n";

        if (count > 0)
        {
            std::cout << "Sum of negative elements on even positions: " << sum << "\n";
            std::cout << "Count: " << count << "\n";
        }
        else
        {
            std::cout << "No negative elements at even positions were found.\n";
        }
    }
}
