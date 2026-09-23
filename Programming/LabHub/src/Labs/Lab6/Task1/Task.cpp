#include "Labs/Lab6/Task1/Task.h"

using std::string;

namespace Labs::Lab6::Task1
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.CalculateRoot(input.x, input.n, input.eps);
        _ui.ShowResult(result.root, result.iterations, _logic.CalculateCheck(input.x, input.n));
    }

    short Task::Number() const
    {
        return 1;
    }

    string Task::Description() const
    {
        return "Розробити алгоритм та записати програму для обчислення значення"
                "кореня n-го степеня";
    }
}