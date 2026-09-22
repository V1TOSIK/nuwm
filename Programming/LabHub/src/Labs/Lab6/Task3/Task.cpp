#include "Labs/Lab6/Task3/Task.h"

namespace Labs::Lab6::Task3
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.CalculateSum(input.x, input.eps);
        _ui.ShowResult(input.x, result.sum, result.iterations, _logic.CalculateCheck(input.x));
    }

    short Task::Number() const
    {
        return 3;
    }

    std::string Task::Description() const
    {
        return "Compute the series value by summing terms until the accuracy threshold is reached.";
    }
}