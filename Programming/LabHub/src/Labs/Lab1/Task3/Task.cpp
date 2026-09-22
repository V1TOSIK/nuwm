#include "Labs/Lab1/Task3/Task.h"
#include "Labs/Lab1/Task3/UI/UI.h"

namespace Labs::Lab1::Task3
{
    void Task::Execute() {
        _ui.ShowResult();
    }

    short Task::Number() const
    {
        return 3;
    }

    std::string Task::Description() const
    {
        return "coming soon...";
    }
}