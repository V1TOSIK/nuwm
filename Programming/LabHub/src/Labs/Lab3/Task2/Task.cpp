#include "Labs/Lab3/Task2/Task.h"

namespace Labs::Lab3::Task2
{
    void Task::Execute()
    {
        auto input = _ui.ShowInputs();
        auto values = _logic.CalculateValues(input.k, input.l);

        const bool foundValue =
            (values.a < -1.0f || values.a > 5.0f) ||
            (values.b < -1.0f || values.b > 5.0f) ||
            (values.c < -1.0f || values.c > 5.0f);

        _ui.ShowResult(values.a, values.b, values.c, foundValue);
    }

    short Task::Number() const
    {
        return 2;
    }

    std::string Task::Description() const
    {
        return "Compute values and list those outside [-1; 5].";
    }
}