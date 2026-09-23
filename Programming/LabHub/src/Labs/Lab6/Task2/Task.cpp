#include "Labs/Lab6/Task2/Task.h"

using std::string;

namespace Labs::Lab6::Task2
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.Calculate(input.x0, input.eps);
        _ui.ShowResult(result);
    }

    short Task::Number() const
    {
        return 2;
    }

    string Task::Description() const
    {
        return "Скласти програму обчислення кореня нелінійного рівняння f(x)=0, "
                "користуючись однією з ітераційних формул, якщо початкове наближення "
                "кореня x(0) або проміжок ізоляції кореня [a, b] задані. Обчислення "
                "припинити, якщо різниця двох послідовних наближень до кореня не "
                "перевищує заданої точності ε = 0,001\n"
                "!!!Cкористатись ітераційною формулою методу простих ітерацій";
    }
}