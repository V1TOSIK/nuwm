#include "Labs/Lab9/Task2/Task.h"

using std::string;

namespace Labs::Lab9::Task2
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto product = _logic.Calculate(input.tensor);
        _ui.ShowResult(product);
    }

    short Task::Number() const
    {
        return 2;
    }

    string Task::Description() const
    {
        return "В тензорі T(3х3х2) знайти добуток елементів головної діагоналі. ";
    }
}