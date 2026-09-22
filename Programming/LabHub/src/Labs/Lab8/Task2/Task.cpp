#include <iostream>

#include "Labs/Lab8/Task2/Task.h"

namespace Labs::Lab8::Task2
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        if (input.rows <= 0 || input.cols <= 0)
        {
            std::cout << "Invalid matrix dimensions.\n";
            return;
        }

        const auto result = _logic.Calculate(input.rows, input.cols, input.values);
        _ui.ShowResult(result);
    }

    short Task::Number() const
    {
        return 2;
    }

    std::string Task::Description() const
    {
        return "Find max, min, and range for each column in the matrix.";
    }
}