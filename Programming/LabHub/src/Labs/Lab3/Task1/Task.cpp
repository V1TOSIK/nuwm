#include "Labs/Lab3/Task1/Task.h"

using std::string;

namespace Labs::Lab3::Task1
{
    void Task::Execute()
    {
        auto input = _ui.ShowInputs();
        auto result = _logic.CalculateY(input.x);
        _ui.ShowResult(input.x, result);
    }

    short Task::Number() const
    {
        return 1;
    }

    string Task::Description() const
    {
        return "Розробити алгоритм та написати відповідну програму знаходження "
                "значення функції, яка обчислюється в залежності від значення "
                "аргументу. ";
    }
}