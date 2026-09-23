#include "Labs/Lab7/Task3/Task.h"

using std::string;

namespace Labs::Lab7::Task3
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.Calculate(input.size, input.values);
        _ui.ShowResult(result.positiveCount, result.negativeCount, result.zeroFound, result.valid);
    }

    short Task::Number() const
    {
        return 3;
    }

    string Task::Description() const
    {
        return "У масиві А(n) (n<=7) хоча б один нуль. Визначити кількість додатніх "
                "та кількість від’ємних елементів до першого нуля.";
    }
}