#include "Labs/Lab5/Task2/Task.h"

namespace Labs::Lab5::Task2
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto product = _logic.CalculateProductOfOddNumbers(input.startNumber, input.endNumber);
        _ui.ShowResult(input.startNumber, input.endNumber, product);
    }

    short Task::Number() const
    {
        return 2;
    }

    std::string Task::Description() const
    {
        return "Multiply all odd numbers in the specified range.";
    }
}