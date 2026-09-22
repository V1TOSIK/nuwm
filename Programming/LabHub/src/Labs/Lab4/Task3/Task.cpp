#include "Labs/Lab4/Task3/Task.h"

namespace Labs::Lab4::Task3
{
    void Task::Execute()
    {
        auto input = _ui.ShowInputs();
        _ui.ShowResult(input.xStart, input.xEnd, input.dx, input.yStart, input.yEnd, input.dy);
    }

    short Task::Number() const
    {
        return 3;
    }

    std::string Task::Description() const
    {
        return "Generate a table of z values for a grid of x and y.";
    }
}