#include "Labs/Lab5/Task1/UI/UI.h"

#include <iomanip>
#include <iostream>

namespace Labs::Lab5::Task1
{
    Input UI::ShowInputs()
    {
        Input input{};

        std::cout << "--- Sum input ---\n";
        std::cout << "Enter the start value k: ";
        std::cin >> input.kStart;
        std::cout << "Enter the end value k: ";
        std::cin >> input.kEnd;

        std::cout << "\n--- Product input ---\n";
        std::cout << "Enter the start value m: ";
        std::cin >> input.m;
        std::cout << "Enter the end value n: ";
        std::cin >> input.n;

        return input;
    }

    void UI::ShowResult(double sum, double product)
    {
        std::cout << "\n--- Calculation result ---\n";
        std::cout << std::fixed << std::setprecision(6);
        std::cout << "s = " << sum << '\n';
        std::cout << "y = " << product << '\n';
    }
}
