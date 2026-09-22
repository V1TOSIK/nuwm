#include "Labs/Lab1/Task1/Task.h"
#include "Labs/Lab1/Task1/UI/UI.h"
#include "Labs/Lab1/Task1/Logic/Logic.h"
#include "Labs/Lab1/Task1/Input.h"

namespace Labs::Lab1::Task1
{
    void Task::Execute() {
        auto input = _ui.ShowInputs();
        auto result = _logic.CalculateR(input.x, input.k);
        _ui.ShowResult(input.x, input.k, result);
    }

    short Task::Number() const
    {
        return 1;
    }

    std::string Task::Description() const
    {
        return "coming soon...";
    }
}