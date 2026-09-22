#include "Labs/Lab2/Task2/Task.h"

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

    std::string Task::Description() const
    {
        return "Validate a triangle and calculate its perimeter.";
    }
}
