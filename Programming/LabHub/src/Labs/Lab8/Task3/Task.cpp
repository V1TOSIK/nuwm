#include "Labs/Lab8/Task3/Task.h"

using std::string;

namespace Labs::Lab8::Task3
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.Calculate(input.vectorsCount, input.dimension, input.values);
        _ui.ShowResult(result);
    }

    short Task::Number() const
    {
        return 3;
    }

    string Task::Description() const
    {
        return "Координати m векторів задані матрицею А(m, n) (m<=6). Необхідно "
                "обчислити довжини цих векторів, роздрукувати їх значення і серед "
                "них знайти і вказати номер вектора мінімальної довжини";
    }
}