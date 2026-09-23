#include "Labs/Lab5/Task1/Task.h"

using std::string;

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

    string Task::Description() const
    {
        return "Розробити алгоритм та написати програму обчислення значення суми та добутку.";
    }
}