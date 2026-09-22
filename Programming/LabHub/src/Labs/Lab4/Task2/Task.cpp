#include "Labs/Lab4/Task2/Task.h"

#include <vector>

namespace Labs::Lab4::Task2
{
    void Task::Execute()
    {
        auto input = _ui.ShowInputs();

        const int count = static_cast<int>((input.zEnd - input.zStart) / input.dz) + 1;
        std::vector<float> values(static_cast<size_t>(count));

        for (int i = 0; i < count; ++i)
        {
            values[static_cast<size_t>(i)] = _logic.CalculateFunction(input.zStart + i * input.dz);
        }

        _ui.ShowResult(input.zStart, input.zEnd, input.dz, values.data(), count);
    }

    short Task::Number() const
    {
        return 2;
    }

    std::string Task::Description() const
    {
        return "Tabulate a piecewise function over a range.";
    }
}