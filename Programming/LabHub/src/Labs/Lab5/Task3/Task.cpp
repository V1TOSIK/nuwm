#include "Labs/Lab5/Task3/Task.h"

using std::string;

namespace Labs::Lab5::Task3
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.CalculateSum(input.z1, input.deltaZ);
        _ui.ShowResult(result);
    }

    short Task::Number() const
    {
        return 3;
    }

    string Task::Description() const
    {
        return "Для даного завдання розробити алгоритм та написати відповідну "
                "програму для обчислення значення суми без використання масиву з "
                "виведенням результатів обчислення на екран.";
    }
}