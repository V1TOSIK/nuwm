#include "Labs/Lab8/Task3/UI/UI.h"
#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;
using std::vector;

namespace Labs::Lab8::Task3
{
    Input UI::ShowInputs()
    {
        Input input{};

        cout << "Введіть кількість векторів m (1..6): ";
        cin >> input.vectorsCount;
        cout << "Введіть вимір векторів n: ";
        cin >> input.dimension;

        if (input.vectorsCount < 1 || input.vectorsCount > 6 || input.dimension < 1 || input.dimension > 20)
        {
            input.vectorsCount = 0;
            input.dimension = 0;
            return input;
        }

        cout << "Введіть координати для кожного вектора:\n";
        for (int i = 0; i < input.vectorsCount; ++i)
        {
            cout << "Вектор #" << (i + 1) << ": ";
            for (int j = 0; j < input.dimension; ++j)
            {
                cin >> input.values[i][j];
            }
        }

        return input;
    }

    void UI::ShowResult(const vector<VectorLength>& lengths)
    {
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
