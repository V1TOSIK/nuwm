#include "Labs/Lab2/Task1/Task.h"

namespace Labs::Lab2::Task1
{
    void Task::Execute()
    {
        auto input = _ui.ShowInputs();
        auto result = _logic.CalculateResult(input.a, input.b);
        _ui.ShowResult(input.a, input.b, result);
    }

    short Task::Number() const
    {
        return 1;
    }

    std::string Task::Description() const
    {
        return "Calculate complex expression from task 1.";
    }
}