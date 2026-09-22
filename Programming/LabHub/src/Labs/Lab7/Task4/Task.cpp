#include "Labs/Lab7/Task4/Task.h"

#include <iostream>

namespace Labs::Lab7::Task4
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        if (input.count <= 0)
        {
            std::cout << "Invalid salary count.\n";
            return;
        }

        const auto result = _logic.Calculate(input.count, input.salaries, input.threshold);
        _ui.ShowResult(result.employees, input.threshold);
    }

    short Task::Number() const
    {
        return 4;
    }

    std::string Task::Description() const
    {
        return "List employees whose salary is not greater than the limit.";
    }
}