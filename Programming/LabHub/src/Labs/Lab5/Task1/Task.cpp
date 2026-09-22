#include "Labs/Lab5/Task1/Task.h"

namespace Labs::Lab5::Task1
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto sum = _logic.CalculateSum(input.kStart, input.kEnd);
        const auto product = _logic.CalculateProduct(input.m, input.n);
        _ui.ShowResult(sum, product);
    }

    short Task::Number() const
    {
        return 1;
    }

    std::string Task::Description() const
    {
        return "Compute the sum and product for the specified ranges.";
    }
}