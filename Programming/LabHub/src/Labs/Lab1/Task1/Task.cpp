#include "Labs/Lab1/Task1/Task.h"

using std::string;

namespace Labs::Lab1::Task1
{
    void Task::Execute() {
        auto input = _ui.ShowInputs();
        auto result = _logic.Calculate(input.x, input.k);
        _ui.ShowResult(input.x, input.k, result);
    }

    short Task::Number() const
    {
        return 1;
    }

    string Task::Description() const
    {
        return "Записати мовою програмування С++ математичний вираз, вибираючи "
                "індентифікатори змінних відповідного типу за замовчуванням (без "
                "явного опису типу). Звернути увагу на тип аргументів стандартних "
                "функцій.";
    }
}