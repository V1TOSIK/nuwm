#include <iostream>

#include "Labs/Lab8/Task3/Task.h"

namespace Labs::Lab8::Task3
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        if (input.vectorsCount <= 0 || input.dimension <= 0)
        {
            std::cout << "Invalid vector dimensions.\n";
            return;
        }

        const auto result = _logic.Calculate(input.vectorsCount, input.dimension, input.values);
        _ui.ShowResult(result);
    }

    short Task::Number() const
    {
        return 3;
    }

    std::string Task::Description() const
    {
        return "Find the vector with the minimum length among all input vectors.";
    }
}