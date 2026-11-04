#include "Labs/Lab8/Task1/Task.h"

using std::string;

namespace Labs::Lab8::Task1
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.Calculate(input.values);
        _ui.ShowResult(result.sumAbove, result.sumBelow);
    }

    short Task::Number() const
    {
        return 1;
    }

    string Task::Description() const
    {
        return "В матриці В знайти суму елементів, що лежать вище головної діагоналі.\n";
    }
}