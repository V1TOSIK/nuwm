#include "Labs/Lab1/Task4/Task.h"

using std::string;

namespace Labs::Lab1::Task4
{
    void Task::Execute() {
        _ui.ShowResult();
    }

    short Task::Number() const
    {
        return 4;
    }

    string Task::Description() const
    {
        return "Виправити синтаксичні помилки в записі наведених нижче "
                "арифметичних виразів: \n"
                "z=(exp(exp*lnx)-exp(-x)+0,12)/(sqrt(sin(y-1)));";
    }
}