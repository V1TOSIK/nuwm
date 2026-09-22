#include "Labs/Lab9/Task2/UI/UI.h"

#include <iomanip>
#include <iostream>

namespace Labs::Lab9::Task2
{
    Input UI::ShowInputs()
    {
        Input input{};

        std::cout << "Enter the tensor elements T(3x3x2) in total 18 values:\n";
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                for (int k = 0; k < 2; ++k)
                {
                    std::cout << "T[" << i << "][" << j << "][" << k << "] = ";
                    std::cin >> input.tensor[i][j][k];
                }
            }
        }

        return input;
    }

    void UI::ShowResult(double product)
    {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nProduct of the main diagonal elements: " << product << "\n";
    }
}
