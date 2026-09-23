#include "Labs/Lab7/Task4/Task.h"

using std::string;

namespace Labs::Lab7::Task4
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.Calculate(input.count, input.salaries, input.threshold);
        _ui.ShowResult(result.employees, input.threshold, result.valid);
    }

    short Task::Number() const
    {
        return 4;
    }

    string Task::Description() const
    {
        return "Дані про заробітну плату N працівників зберігаються в масиві M(N). "
                "Визначити номери та зарплати тих працівників, зарплата яких не "
                "перевищує заданої Mo.";
    }
}