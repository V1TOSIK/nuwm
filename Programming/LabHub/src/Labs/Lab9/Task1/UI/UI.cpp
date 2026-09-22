#include "Labs/Lab9/Task1/UI/UI.h"

#include <iomanip>
#include <iostream>

namespace Labs::Lab9::Task1
{
    Input UI::ShowInputs()
    {
        Input input{};

        std::cout << "Enter the number of companies M: ";
        std::cin >> input.firmsCount;
        std::cout << "Enter the number of months N: ";
        std::cin >> input.monthsCount;

        std::cout << "Enter profit values for each company month by month:\n";
        for (int firm = 0; firm < input.firmsCount; ++firm)
        {
            std::cout << "Company #" << (firm + 1) << " (" << input.monthsCount << " values): ";
            for (int month = 0; month < input.monthsCount; ++month)
            {
                std::cin >> input.profits[firm][month];
            }
        }

        return input;
    }

    void UI::ShowResult(const std::vector<Result>& result)
    {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nResults (largest profit for each month):\n";

        for (const auto& entry : result)
        {
            std::cout << "Month #" << entry.month
                      << " -> Largest profit: " << entry.maxProfit
                      << " (Company #" << entry.bestFirm << ")\n";
        }
    }
}
