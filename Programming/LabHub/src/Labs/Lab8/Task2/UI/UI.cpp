#include "Labs/Lab8/Task2/UI/UI.h"
#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;
using std::vector;

namespace Labs::Lab8::Task2
{
    Input UI::ShowInputs()
    {
        Input input{};

        cout << "Введіть кількість рядків m (1..5): ";
        cin >> input.rows;
        cout << "Введіть кількість колонок n (1..8): ";
        cin >> input.cols;

        if (input.rows < 1 || input.rows > 5 || input.cols < 1 || input.cols > 8)
        {
            input.rows = 0;
            input.cols = 0;
            return input;
        }

        cout << "Введіть матрицю A (" << input.rows << "x" << input.cols << "):\n";
        for (int i = 0; i < input.rows; ++i)
        {
            for (int j = 0; j < input.cols; ++j)
            {
                cin >> input.values[i][j];
            }
        }

        return input;
    }

    void UI::ShowResult(const vector<ColumnRange>& ranges)
    {
        cout << fixed << setprecision(2);
        cout << "\Результати по колонках:\n";

        for (size_t i = 0; i < ranges.size(); ++i)
        {
            cout << "Колонка #" << (i + 1) << ": макс. = " << ranges[i].maxValue
                      << ", мін. = " << ranges[i].minValue
                      << ", різниця = " << ranges[i].diff << "\n";
        }
    }
}
