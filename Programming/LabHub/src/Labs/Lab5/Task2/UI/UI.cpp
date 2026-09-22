#include "Labs/Lab5/Task2/UI/UI.h"

#include <iostream>
#include <utility>

namespace Labs::Lab5::Task2
{
    Input UI::ShowInputs()
    {
        Input input{};

        std::cout << "Enter the range start: ";
        std::cin >> input.startNumber;
        std::cout << "Enter the range end: ";
        std::cin >> input.endNumber;

        if (input.startNumber > input.endNumber)
        {
            std::swap(input.startNumber, input.endNumber);
        }

        return input;
    }

    void UI::ShowResult(int startNumber, int endNumber, unsigned long long product)
    {
        std::cout << "\n--- Result ---\n";
        std::cout << "Range: [" << startNumber << ", " << endNumber << "]\n";
        std::cout << "Product of odd numbers = " << product << '\n';
    }
}
