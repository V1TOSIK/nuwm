#include "Labs/Lab9/Task1/Task.h"

using std::string;

namespace Labs::Lab9::Task1
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.Calculate(input.firmsCount, input.monthsCount, input.profits);
        _ui.ShowResult(result);
    }

    short Task::Number() const
    {
        return 1;
    }

    string Task::Description() const
    {
        return "Визначити найбільші прибутки серед усіх фірм за кожен місяць і "
                "вивести їх, вказавши номер фірми та номер місяця";
    }
}
