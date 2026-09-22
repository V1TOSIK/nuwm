#include "Labs/Lab1/Task4/Task.h"
#include "Labs/Lab1/Task4/UI/UI.h"

namespace Labs::Lab1::Task4
{
    void Task::Execute() {
        _ui.ShowResult();
    }

    short Task::Number() const
    {
        return 4;
    }

    std::string Task::Description() const
    {
        return "coming soon...";
    }
}