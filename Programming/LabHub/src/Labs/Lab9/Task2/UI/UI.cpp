#include "Labs/Lab9/Task2/UI/UI.h"
#include <iomanip>
#include <iostream>

using std::cout;
using std::cin;
using std::fixed;
using std::setprecision;

namespace Labs::Lab9::Task2
{
    Input UI::ShowInputs()
    {
        Input input{};

        cout << "Введіть елементи тензора T(3x3x2) в сумі 18 елементів:\n";
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                for (int k = 0; k < 2; ++k)
                {
                    cout << "T[" << i << "][" << j << "][" << k << "] = ";
                    cin >> input.tensor[i][j][k];
                }
            }
        }
        cout << "\nЗначення тензору успішно введено.\n";
        return input;
    }

    void UI::ShowResult(double product)
    {
        cout << fixed << setprecision(2);
        cout << "\nДобуток елементів головної діагоналі: " << product << "\n";
    }
}
