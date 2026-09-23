#include "Labs/Lab4/Task1/Task.h"

using std::string;

namespace Labs::Lab4::Task1
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.Calculate(input.xStart, input.xEnd, input.dx);
        _ui.ShowResult(input.xStart, input.xEnd, input.dx, input.n, result.values);
    }

    short Task::Number() const
    {
        return 1;
    }

    string Task::Description() const
    {
        return "Розробити алгоритм та написати програму обчислення значення "
                "аргументу функції на вказаному проміжку із заданим кроком, а також "
                "значень функції (табулювання функції), починаючи із заданої точки. ";
    }
}