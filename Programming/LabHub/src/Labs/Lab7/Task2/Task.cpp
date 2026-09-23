#include "Labs/Lab7/Task2/Task.h"

using std::string;

namespace Labs::Lab7::Task2
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.Calculate(input.values);
        _ui.ShowResult(result.hasSecond, result.secondIndex, result.secondValue, result.hasFourth, result.fourthIndex, result.fourthValue);
    }

    short Task::Number() const
    {
        return 2;
    }

    string Task::Description() const
    {
        return "Вивести на друк значення 2-го і 4-го від’ємного елемента масиву "
                "B(7) = (-2,3; 0,1; -2,3; 4,1; -3,2; -2,0; -4,0) разом із їх порядковими "
                "номерами.";
    }
}