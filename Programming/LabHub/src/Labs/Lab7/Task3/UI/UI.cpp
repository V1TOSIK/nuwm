#include "Labs/Lab7/Task3/UI/UI.h"

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

namespace Labs::Lab7::Task3
{
    Input UI::ShowInputs()
    {
        Input input{};

        cout << "Введіть розмір масиву (1..7): ";
        cin >> input.size;

        if (input.size < 1 || input.size > 7)
        {
            input.size = 0;
            return input;
        }

        cout << "Введіть " << input.size << " елементів (очікується хоча б один нуль):\n";
        for (int i = 0; i < input.size; ++i)
        {
            cin >> input.values[i];
        }

        return input;
    }

    void UI::ShowResult(int positiveCount, int negativeCount, bool zeroFound, bool valid)
    {
        if (!valid)
        {
            cout << "Некоректний розмір.\n";
            return;
        }

        cout << fixed << setprecision(2);
        cout << "\nРезультати:\n";

        if (zeroFound)
        {
            cout << "Кількість додатних до першого нуля: " << positiveCount << "\n";
            cout << "Кількість від'ємних до першого нуля: " << negativeCount << "\n";
        }
        else
        {
            cout << "Нуль у масиві не знайдено.\n";
        }
    }
}
