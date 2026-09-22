#include "Labs/Lab8/Task1/UI/UI.h"

#include <iomanip>
#include <iostream>

namespace Labs::Lab8::Task1
{
    Input UI::ShowInputs()
    {
        Input input{};

        std::cout << "Enter a 4x4 matrix B:\n";
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                std::cin >> input.values[i][j];
            }
        }

        return input;
    }

    void UI::ShowResult(double sumAbove, double sumBelow)
    {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nResults:\n";
        std::cout << "Sum above main diagonal: " << sumAbove << "\n";
        std::cout << "Sum below main diagonal: " << sumBelow << "\n";

        if (sumAbove > sumBelow)
        {
            std::cout << "Conclusion: sum above the main diagonal is greater.\n";
        }
        else if (sumBelow > sumAbove)
        {
            std::cout << "Conclusion: sum below the main diagonal is greater.\n";
        }
        else
        {
            std::cout << "Conclusion: sums are equal.\n";
        }
    }
}
