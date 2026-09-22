#include "Labs/Lab4/Task1/Task.h"

#include <vector>

namespace Labs::Lab4::Task1
{
    void Task::Execute()
    {
        auto input = _ui.ShowInputs();

        const int count = static_cast<int>((input.xEnd - input.xStart) / input.dx) + 1;
        std::vector<float> values(static_cast<size_t>(count));

        for (int i = 0; i < count; ++i)
        {
            values[static_cast<size_t>(i)] = _logic.CalculateFunction(input.xStart + i * input.dx);
        }

        _ui.ShowResult(input.xStart, input.xEnd, input.dx, input.n, values.data(), count);
    }

    short Task::Number() const
    {
        return 1;
    }

    std::string Task::Description() const
    {
        return "Tabulate the function and display values.";
    }
}