#include "Labs/Lab4/Task3/Task.h"

using std::string;

namespace Labs::Lab4::Task3
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.Calculate(
            input.xStart,
            input.xEnd,
            input.dx,
            input.yStart,
            input.yEnd,
            input.dy
        );
        _ui.ShowResult(result);
    }

    short Task::Number() const
    {
        return 3;
    }

    string Task::Description() const
    {
        return "Розробити алгоритм та написати програму обчислення значення "
                "аргументів функції на вказаних проміжках із заданими кроками, а також "
                "значень функції (табулювання функції двох змінних), починаючи із "
                "заданої точки. ";
    }
}