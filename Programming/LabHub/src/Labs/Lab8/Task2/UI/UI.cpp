#include "Labs/Lab8/Task2/UI/UI.h"
#include <iomanip>
#include <iostream>
#include <random>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;
using std::setw;
using std::vector;

namespace Labs::Lab8::Task2
{
    void UI::FillArray(double matrix[5][8], int rows, int cols)
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        // Діапазон значень: наприклад, від -50.0 до 50.0
        std::uniform_real_distribution<double> dist(-50.0, 50.0);

        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                matrix[i][j] = dist(gen);
            }
        }
    }

    Input UI::ShowInputs()
    {
        Input input{};

        cout << "Введіть кількість рядків m (1..5): ";
        cin >> input.rows;
        cout << "Введіть кількість колонок n (1..8): ";
        cin >> input.cols;

        if (input.rows < 1 || input.rows > 5 || input.cols < 1 || input.cols > 8)
        {
            cout << "Помилка! Некоректні розміри матриці.\n";
            input.rows = 0;
            input.cols = 0;
            return input;
        }

        // Заповнення матриці випадковими числами
        FillArray(input.values, input.rows, input.cols);

        // Виведення згенерованої матриці
        cout << fixed << setprecision(2);
        cout << "\nЗгенерована матриця A (" << input.rows << "x" << input.cols << "):\n";
        for (int i = 0; i < input.rows; ++i)
        {
            for (int j = 0; j < input.cols; ++j)
            {
                cout << setw(8) << input.values[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";

        return input;
    }

    void UI::ShowResult(const vector<ColumnRange>& ranges)
    {
        cout << fixed << setprecision(2);
        cout << "Результати по колонках:\n";

        for (size_t i = 0; i < ranges.size(); ++i)
        {
            cout << "Колонка #" << (i + 1) << ": макс. = " << ranges[i].maxValue
                      << ", мін. = " << ranges[i].minValue
                      << ", різниця = " << ranges[i].diff << "\n";
        }
    }
}
