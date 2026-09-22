#include "Labs/Lab7/Task3/Task.h"

#include <iostream>

namespace Labs::Lab7::Task3
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        if (input.size <= 0)
        {
            std::cout << "Invalid size.\n";
            return;
        }

        const auto result = _logic.Calculate(input.size, input.values);
        _ui.ShowResult(result.positiveCount, result.negativeCount, result.zeroFound);
    }

    short Task::Number() const
    {
        return 3;
    }

    std::string Task::Description() const
    {
        return "Count positive and negative numbers before the first zero.";
    }
}