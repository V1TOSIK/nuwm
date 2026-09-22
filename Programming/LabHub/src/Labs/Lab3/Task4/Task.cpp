#include "Labs/Lab3/Task4/Task.h"

namespace Labs::Lab3::Task4
{
    void Task::Execute()
    {
        auto input = _ui.ShowInputs();
        auto stats = _logic.CalculateStats(input.a, input.b, input.c);
        _ui.ShowResult(stats.average, stats.minProfit, stats.difference);
    }

    short Task::Number() const
    {
        return 4;
    }

    std::string Task::Description() const
    {
        return "Calculate the average profit and its deviation from the minimum.";
    }
}