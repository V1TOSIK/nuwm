#include "Labs/Lab5/Task3/UI/UI.h"

#include <iomanip>
#include <iostream>

namespace Labs::Lab5::Task3
{
    Input UI::ShowInputs()
    {
        Input input{};

        std::cout << "Enter z1: ";
        std::cin >> input.z1;
        std::cout << "Enter delta_z: ";
        std::cin >> input.deltaZ;

        return input;
    }

    void UI::ShowResult(double result)
    {
        std::cout << "\n--- Result ---\n";
        std::cout << std::fixed << std::setprecision(6);
        std::cout << "Sum y = " << result << '\n';
    }
}
