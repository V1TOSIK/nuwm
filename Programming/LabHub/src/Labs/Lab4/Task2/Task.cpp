#include "Labs/Lab4/Task2/Task.h"

using std::string;

namespace Labs::Lab4::Task2
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.Calculate(input.zStart, input.zEnd, input.dz);
        _ui.ShowResult(input.zStart, input.dz, result.values);
    }

    short Task::Number() const
    {
        return 2;
    }

    string Task::Description() const
    {
        return "Розробити алгоритм та написати програму обчислення значення "
                "функції із заданим кроком на вказаних проміжках.";
    }
}