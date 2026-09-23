#include "Labs/Lab7/Task1/Task.h"

using std::string;

namespace Labs::Lab7::Task1
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.Calculate(input.values);
        _ui.ShowResult(result.sum, result.count);
    }

    short Task::Number() const
    {
        return 1;
    }

    string Task::Description() const
    {
        return "Надрукувати суму від’ємних елементів, які стоять на парних місцях в масиві\n"
                "X(12) = (-2,3; 4,0; -8,9; 6,3; 4,9; -7,8; -6,5; 5,1; 3,8; -4,3; -5,1; 7,2)";
    }
}