#include "Labs/Lab6/Task3/UI/UI.h"

#include <iomanip>
#include <iostream>

namespace Labs::Lab6::Task3
{
    Input UI::ShowInputs()
    {
        Input input{};

        std::cout << "Enter x: ";
        std::cin >> input.x;
        std::cout << "Enter eps: ";
        std::cin >> input.eps;

        return input;
    }

    void UI::ShowResult(double x, double sum, int iterations, double check)
    {
        std::cout << std::fixed << std::setprecision(8);
        std::cout << "\nResults:\n";
        std::cout << "x: " << x << "\n";
        std::cout << "Computed f(x): " << sum << "\n";
        std::cout << "Iterations: " << iterations << "\n";
        std::cout << "sinh(x): " << check << "\n";
    }
}
