#include "Labs/Lab6/Task1/Task.h"

namespace Labs::Lab6::Task1
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.CalculateRoot(input.x, input.n, input.eps);
        _ui.ShowResult(result.root, result.iterations, _logic.CalculateCheck(input.x, input.n));
    }

    short Task::Number() const
    {
        return 1;
    }

    std::string Task::Description() const
    {
        return "Approximate the n-th root by the fixed-point iteration method.";
    }
}