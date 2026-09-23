#include "Labs/Lab3/Task2/Task.h"

using std::string;

namespace Labs::Lab3::Task2
{
    void Task::Execute()
    {
        auto input = _ui.ShowInputs();
        auto values = _logic.CalculateResult(input.k, input.l);
        _ui.ShowResult(values.a, values.b, values.c, values.foundValue);
    }

    short Task::Number() const
    {
        return 2;
    }

    string Task::Description() const
    {
        return "Вибрати серед чисел ті з них, що лежать поза проміжком [-1; 5], та "
                "надрукувати їх:";
    }
}