#include "Labs/Lab8/Task1/UI/UI.h"
#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

namespace Labs::Lab8::Task1
{
    Input UI::ShowInputs()
    {
        Input input{};

        cout << "Введіть матрицю 4x4:\n";
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                cin >> input.values[i][j];
            }
        }

        return input;
    }

    void UI::ShowResult(double sumAbove, double sumBelow)
    {
        cout << fixed << setprecision(2);
        cout << "\nРезультати:\n";
        cout << "Сума вище головної діагоналі: " << sumAbove << "\n";
        cout << "Сума нижче головної діагоналі: " << sumBelow << "\n";

        if (sumAbove > sumBelow)
        {
            cout << "Висновок: сума вище головнаї діагоналі є більшою.\n";
        }
        else if (sumBelow > sumAbove)
        {
            cout << "Висновок: сума нижче головнаї діагоналі є більшою.\n";
        }
        else
        {
            cout << "Висновок: сума вище і нижче головної діагоналі однакова.\n";
        }
    }
}
