#include "Labs/Lab5/Task2/Task.h"

using std::string;

namespace Labs::Lab5::Task2
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto product = _logic.CalculateProductOfOddNumbers(input.startNumber, input.endNumber);
        _ui.ShowResult(input.startNumber, input.endNumber, product);
    }

    short Task::Number() const
    {
        return 2;
    }

    string Task::Description() const
    {
        return "Підрахувати добуток всіх непарних натуральних чисел від 10 до 30";
    }
}