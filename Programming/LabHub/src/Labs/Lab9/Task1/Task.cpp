#include <iostream>

#include "Labs/Lab9/Task1/Task.h"

namespace Labs::Lab9::Task1
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();

        if (input.firmsCount <= 0 || input.monthsCount <= 0 || input.firmsCount > 50 || input.monthsCount > 50)
        {
            std::cout << "Error: invalid dimensions.\n";
            return;
        }

        const auto result = _logic.Calculate(input.firmsCount, input.monthsCount, input.profits);
        _ui.ShowResult(result);
    }

    short Task::Number() const
    {
        return 1;
    }

    std::string Task::Description() const
    {
        return "Find the company with the highest profit for each month in a table.";
    }
}
