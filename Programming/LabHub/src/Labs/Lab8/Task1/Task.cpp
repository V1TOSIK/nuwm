#include "Labs/Lab8/Task1/Task.h"

namespace Labs::Lab8::Task1
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.Calculate(input.values);
        _ui.ShowResult(result.sumAbove, result.sumBelow);
    }

    short Task::Number() const
    {
        return 1;
    }

    std::string Task::Description() const
    {
        return "Compare the sums of matrix elements above and below the main diagonal.";
    }
}