#include "Labs/Lab7/Task4/UI/UI.h"

#include <iomanip>
#include <iostream>

namespace Labs::Lab7::Task4
{
    Input UI::ShowInputs()
    {
        Input input{};

        std::cout << "Enter the number of employees N: ";
        std::cin >> input.count;
        if (input.count <= 0 || input.count > 100)
        {
            input.count = 0;
            return input;
        }

        std::cout << "Enter salaries for each employee:\n";
        for (int i = 0; i < input.count; ++i)
        {
            std::cout << "Employee #" << (i + 1) << ": ";
            std::cin >> input.salaries[i];
        }

        std::cout << "Enter the salary limit M0: ";
        std::cin >> input.threshold;

        return input;
    }

    void UI::ShowResult(const std::vector<Employee>& employees, double threshold)
    {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nEmployees with salary <= " << threshold << ":\n";

        if (employees.empty())
        {
            std::cout << "No employees match the threshold.\n";
            return;
        }

        for (const auto& employee : employees)
        {
            std::cout << "Employee number: " << employee.number
                      << ", salary: " << employee.salary << "\n";
        }
    }
}
