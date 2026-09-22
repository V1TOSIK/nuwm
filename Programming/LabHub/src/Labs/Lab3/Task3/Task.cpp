#include "Labs/Lab3/Task3/Task.h"

namespace Labs::Lab3::Task3
{
    void Task::Execute()
    {
        auto input = _ui.ShowInputs();
        auto isInside = _logic.IsInsideSemiCircle(input.x, input.y, 3.0f);
        _ui.ShowResult(input.x, input.y, isInside);
    }

    short Task::Number() const
    {
        return 3;
    }

    std::string Task::Description() const
    {
        return "Check whether a point belongs to the specified semicircle.";
    }
}