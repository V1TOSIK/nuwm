#include "Labs/Lab2/Task1/Task.h"

using std::string;

namespace Labs::Lab2::Task1
{
    void Task::Execute()
    {
        auto input = _ui.ShowInputs();
        auto result = _logic.CalculateResult(input.a, input.b);
        _ui.ShowResult(input.a, input.b, result);
    }

    short Task::Number() const
    {
        return 1;
    }

    string Task::Description() const
    {
        return "Розробити алгоритм та написати відповідну програму обчислення "
                "значення арифметичного виразу.";
    }
}