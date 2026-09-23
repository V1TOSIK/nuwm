#include "Labs/Lab2/Task2/Task.h"

using std::string;

namespace Labs::Lab2::Task2
{
    void Task::Execute()
    {
        auto input = _ui.ShowInputs();
        auto perimeter = _logic.CalculatePerimeter(input.a, input.b, input.c);
        _ui.ShowResult(input.a, input.b, input.c, perimeter);
    }

    short Task::Number() const
    {
        return 2;
    }

    string Task::Description() const
    {
        return "Дано три числа А, В, С, які задають сторони трикутника. Визначити "
                "периметр трикутника.";
    }
}
