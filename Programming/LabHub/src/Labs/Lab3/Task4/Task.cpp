#include "Labs/Lab3/Task4/Task.h"

using std::string;

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

    string Task::Description() const
    {
        return "Прибуток підприємств становить відповідно a, b, c (грошових "
                "одиниць). Визначити наскільки середній прибуток підприємств "
                "відрізняється від найменшого. ";
    }
}