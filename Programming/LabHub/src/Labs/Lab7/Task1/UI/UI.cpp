#include "Labs/Lab7/Task1/UI/UI.h"

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

namespace Labs::Lab7::Task1
{
    Input UI::ShowInputs()
    {
        Input input{};

        cout << "Введіть 12 елементів масиву X:\n";
        for (int i = 0; i < 12; ++i)
        {
            cin >> input.values[i];
        }

        return input;
    }

    void UI::ShowResult(double sum, int count)
    {
        cout << fixed << setprecision(2);
        cout << "\nРезультати:\n";

        if (count > 0)
        {
            cout << "Сума від'ємних елементів на парних позиціях: " << sum << "\n";
            cout << "Кількість: " << count << "\n";
        }
        else
        {
            cout << "Від'ємних елементів на парних позиціях не знайдено.\n";
        }
    }
}
