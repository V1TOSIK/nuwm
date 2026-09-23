#include "Labs/Lab8/Task1/Task.h"

using std::string;

namespace Labs::Lab8::Task1
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        const auto result = _logic.Calculate(input.values);
        _ui.ShowResult(result.sumAbove, result.sumBelow);
    }

    short Task::Number() const
    {
        return 1;
    }

    string Task::Description() const
    {
        return "В матриці В знайти суму елементів, що лежать вище головної діагоналі.\n"
                "\t|3\t 4\t -1,5\t 0 |\n"
                "\t|2\t -1,2\t 3\t 1 |\n"
                "B(4,4)=\t|1\t 2\t 0,3\t 4 |\n"
                "\t|1,1\t 2,5\t 0\t 1 |";
    }
}