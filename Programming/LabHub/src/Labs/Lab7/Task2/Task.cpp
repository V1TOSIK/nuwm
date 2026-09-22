#include "Labs/Lab7/Task2/Task.h"

namespace Labs::Lab7::Task2
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.Calculate(input.values);
        _ui.ShowResult(result.hasSecond, result.secondIndex, result.secondValue, result.hasFourth, result.fourthIndex, result.fourthValue);
    }

    short Task::Number() const
    {
        return 2;
    }

    std::string Task::Description() const
    {
        return "Print the second and fourth negative values in the array.";
    }
}