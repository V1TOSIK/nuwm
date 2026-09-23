#include "Labs/Lab6/Task3/Task.h"

using std::string;

namespace Labs::Lab6::Task3
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.CalculateSum(input.x, input.eps);
        _ui.ShowResult(input.x, result.sum, result.iterations, _logic.CalculateCheck(input.x));
    }

    short Task::Number() const
    {
        return 3;
    }

    string Task::Description() const
    {
        return "Скласти програму обчислення значення функції, яка представлена у "
                "вигляді нескінченного ряду";
    }
}