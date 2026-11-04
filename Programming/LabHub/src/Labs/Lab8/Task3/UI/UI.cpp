#include "Labs/Lab8/Task3/UI/UI.h"
#include <iomanip>
#include <iostream>
#include <random>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;
using std::setw;
using std::vector;

namespace Labs::Lab8::Task3
{
    void UI::FillArray(double matrix[6][20], int count, int dim)
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        // Діапазон значень: наприклад, від -20.0 до 20.0
        std::uniform_real_distribution<double> dist(-20.0, 20.0);

        for (int i = 0; i < count; ++i)
        {
            for (int j = 0; j < dim; ++j)
            {
                matrix[i][j] = dist(gen);
            }
        }
    }

    Input UI::ShowInputs()
    {
        Input input{};

        cout << "Введіть кількість векторів m (1..6): ";
        cin >> input.vectorsCount;
        cout << "Введіть вимір векторів n (1..20): ";
        cin >> input.dimension;

        if (input.vectorsCount < 1 || input.vectorsCount > 6 || input.dimension < 1 || input.dimension > 20)
        {
            cout << "Помилка! Некоректні параметри векторів.\n";
            input.vectorsCount = 0;
            input.dimension = 0;
            return input;
        }

        // Заповнення випадковими значеннями
        FillArray(input.values, input.vectorsCount, input.dimension);

        // Виведення згенерованих координат векторів
        cout << fixed << setprecision(2);
        cout << "\nЗгенеровані вектори (" << input.vectorsCount << " шт., вимір " << input.dimension << "):\n";
        for (int i = 0; i < input.vectorsCount; ++i)
        {
            cout << "Вектор #" << (i + 1) << ": (";
            for (int j = 0; j < input.dimension; ++j)
            {
                cout << setw(7) << input.values[i][j] << (j + 1 < input.dimension ? ", " : "");
            }
            cout << " )\n";
        }

        return input;
    }

    void UI::ShowResult(const vector<VectorLength>& lengths)
    {
        if (lengths.empty())
        {
            return;
        }

        cout << fixed << setprecision(3);
        cout << "\nДовжини векторів:\n";

        double minLength = lengths.front().length;
        int minIndex = lengths.front().index;

        for (const auto& length : lengths)
        {
            cout << "Вектор #" << length.index << ": " << length.length << "\n";
            if (length.length < minLength)
            {
                minLength = length.length;
                minIndex = length.index;
            }
        }

        cout << "\nВектор з мінімальною довжиною: #" << minIndex << " (довжина = " << minLength << ")\n";
    }
}