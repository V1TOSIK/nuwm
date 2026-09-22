#include "Labs/Lab6/Task2/UI/UI.h"

#include <iomanip>
#include <iostream>

namespace Labs::Lab6::Task2
{
    Input UI::ShowInputs()
    {
        Input input{};

        std::cout << "Enter the initial approximation x0: ";
        std::cin >> input.x0;
        std::cout << "Enter the precision eps: ";
        std::cin >> input.eps;

        return input;
    }

    void UI::ShowResult(double root, int iterations)
    {
        std::cout << std::fixed << std::setprecision(6);
        std::cout << "\nCalculated root: " << root << "\n";
        std::cout << "Iterations: " << iterations << "\n";
    }

    void UI::ShowConvergentResult(double root, int iterations)
    {
        std::cout << "\nThe direct formula diverged. Using the equivalent convergent transformation.\n";
        ShowResult(root, iterations);
    }
}
