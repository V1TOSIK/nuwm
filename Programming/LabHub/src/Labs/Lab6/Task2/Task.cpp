#include "Labs/Lab6/Task2/Task.h"

#include <cmath>

namespace Labs::Lab6::Task2
{
    void Task::Execute()
    {
        const auto input = _ui.ShowInputs();

        double xCurr = input.x0;
        double xNext = 0.0;
        int iterations = 0;
        const int maxIterations = 50;
        bool diverged = false;

        do
        {
            xNext = _logic.Phi(xCurr);
            ++iterations;

            if (std::isnan(xNext) || std::isinf(xNext) || std::abs(xNext) > 1e6 || iterations >= maxIterations)
            {
                diverged = true;
                break;
            }

            if (std::abs(xNext - xCurr) < input.eps)
            {
                break;
            }

            xCurr = xNext;
        }
        while (true);

        if (diverged)
        {
            xCurr = input.x0;
            iterations = 0;
            do
            {
                xNext = _logic.PhiConvergent(xCurr);
                ++iterations;
                const double diff = std::abs(xNext - xCurr);
                xCurr = xNext;

                if (diff < input.eps)
                {
                    break;
                }
            }
            while (iterations < maxIterations);

            _ui.ShowConvergentResult(xNext, iterations);
            return;
        }

        _ui.ShowResult(xNext, iterations);
    }

    short Task::Number() const
    {
        return 2;
    }

    std::string Task::Description() const
    {
        return "Solve the fixed-point equation by checking convergence and fallback iteration.";
    }
}