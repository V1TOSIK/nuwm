#define CIRCUIT_RADIUS 3.0f
#include "Labs/Lab3/Task3/Task.h"

using std::string;

namespace Labs::Lab3::Task3
{
    void Task::Execute()
    {
        auto input = _ui.ShowInputs();
        auto isInside = _logic.IsInsideSemiCircle(input.x, input.y, CIRCUIT_RADIUS);
        _ui.ShowResult(input.x, input.y, CIRCUIT_RADIUS, isInside);
    }

    short Task::Number() const
    {
        return 3;
    }

    string Task::Description() const
    {
        return "Розробити алгоритм i програму, щоб виявити належність точки "
                "M(x, y) геометричній фігурі. Координати точки M:\n"
                "M (1,5; 2,3);";
    }
}