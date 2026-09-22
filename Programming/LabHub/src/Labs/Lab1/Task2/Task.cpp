#include "Labs/Lab1/Task2/Task.h"
#include "Labs/Lab1/Task2/UI/UI.h"
#include "Labs/Lab1/Task2/Logic/Logic.h"
#include "Labs/Lab1/Task2/Input.h"

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

    std::string Task::Description() const
    {
        return "coming soon...";
    }
}