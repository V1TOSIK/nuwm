#include "Labs/Lab5/Task3/Task.h"

namespace Labs::Lab5::Task3
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.CalculateSum(input.z1, input.deltaZ);
        _ui.ShowResult(result);
    }

    short Task::Number() const
    {
        return 3;
    }

    std::string Task::Description() const
    {
        return "Calculate the iterative sum for the recurrent formula.";
    }
}