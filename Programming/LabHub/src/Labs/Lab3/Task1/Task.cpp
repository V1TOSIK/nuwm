#include "Labs/Lab3/Task1/Task.h"

namespace Labs::Lab3::Task1
{
    void Task::Execute()
    {
        auto input = _ui.ShowInputs();
        auto result = _logic.CalculateY(input.x);
        _ui.ShowResult(input.x, result);
    }

    short Task::Number() const
    {
        return 1;
    }

    std::string Task::Description() const
    {
        return "Evaluate the piecewise function from task 1.";
    }
}