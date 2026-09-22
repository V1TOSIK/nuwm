#include "Labs/Lab7/Task1/Task.h"

namespace Labs::Lab7::Task1
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.Calculate(input.values);
        _ui.ShowResult(result.sum, result.count);
    }

    short Task::Number() const
    {
        return 1;
    }

    std::string Task::Description() const
    {
        return "Calculate the sum of negative values placed at odd indices.";
    }
}