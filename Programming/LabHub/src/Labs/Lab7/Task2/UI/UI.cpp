#include "Labs/Lab7/Task2/UI/UI.h"

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

namespace Labs::Lab7::Task2
{
    Input UI::ShowInputs()
    {
        Input input{};

        cout << "Введіть 7 елементів масиву B:\n";
        for (int i = 0; i < 7; ++i)
        {
            cin >> input.values[i];
        }

        return input;
    }

    void UI::ShowResult(bool hasSecond, int secondIndex, double secondValue, bool hasFourth, int fourthIndex, double fourthValue)
    {
        cout << fixed << setprecision(1);
        cout << "\nРезультати:\n";

        if (hasSecond)
        {
            cout << "2-й від'ємний елемент: значення = " << secondValue << ", позиція = " << secondIndex << "\n";
        }

        if (hasFourth)
        {
            cout << "4-й від'ємний елемент: значення = " << fourthValue << ", позиція = " << fourthIndex << "\n";
        }

        if (!hasSecond && !hasFourth)
        {
            cout << "Від'ємних елементів менше двох.\n";
        }
    }
}
