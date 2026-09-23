#include "Labs/Lab1/Task3/Task.h"

using std::string;

namespace Labs::Lab1::Task3
{
    void Task::Execute() {
        _ui.ShowResult();
    }

    short Task::Number() const
    {
        return 3;
    }

    string Task::Description() const
    {
        return "У поданих нижче варіантах наведено представлення чисел в пам’яті "
                "ПК. Відтворити математичний запис числа з однією значущою цифрою "
                "до коми. ";
    }
}