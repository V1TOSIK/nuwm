#include "Labs/Lab6/Task1/UI/UI.h"

#include <iomanip>
#include <iostream>

namespace Labs::Lab6::Task1
{
    Input UI::ShowInputs()
    {
        Input input{};

        std::cout << "Enter x: ";
        std::cin >> input.x;
        std::cout << "Enter n: ";
        std::cin >> input.n;
        std::cout << "Enter eps: ";
        std::cin >> input.eps;

        return input;
    }

    void UI::ShowResult(double root, int iterations, double check)
    {
        std::cout << std::fixed << std::setprecision(6);
        std::cout << "\nResults:\n";
        std::cout << "Calculated root: " << root << "\n";
        std::cout << "Iteration count: " << iterations << "\n";
        std::cout << "Pow check: " << check << "\n";
    }
}
