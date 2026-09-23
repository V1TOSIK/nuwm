#include "Labs/Lab8/Task2/Task.h"

using std::string;

namespace Labs::Lab8::Task2
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.Calculate(input.rows, input.cols, input.values);
        _ui.ShowResult(result);
    }

    short Task::Number() const
    {
        return 2;
    }

    string Task::Description() const
    {
        return "У матриці А(m, n) (m<=5, n<=8) визначити різниці максимального та "
                "мінімального елементів кожного стовпчика.";
    }
}