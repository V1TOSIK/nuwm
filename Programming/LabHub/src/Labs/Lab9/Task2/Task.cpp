#include <iostream>

#include "Labs/Lab9/Task2/Task.h"

namespace Labs::Lab9::Task2
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();
        std::cout << "\nTensor values entered successfully.\n";
        const auto product = _logic.Calculate(input.tensor);
        _ui.ShowResult(product);
    }

    short Task::Number() const
    {
        return 2;
    }

    std::string Task::Description() const
    {
        return "Calculate the product of the main diagonal elements of a 3x3x2 tensor.";
    }
}
