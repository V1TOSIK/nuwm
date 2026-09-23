#include "Labs/Lab1/Task2/Task.h"

using std::string;

namespace Labs::Lab1::Task2
{
    void Task::Execute() {
        auto input = _ui.ShowInputs();
        auto result = _logic.Calculate(input.x, input.c);
        _ui.ShowResult(input.x, input.c, result);
    }

    short Task::Number() const
    {
        return 2;
    }

    string Task::Description() const
    {
        return "Записати мовою програмування C++ даний логічний вираз і "
                "визначити значення результату логічних операцій TRUE або FALSE "
                "при вказаних значеннях змінних. ";
    }
}