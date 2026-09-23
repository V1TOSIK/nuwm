#include "Labs/Lab2/Task2/UI/UI.h"
#include <iostream>

using std::cin;
using std::cout;

namespace Labs::Lab2::Task2
{
    Input UI::ShowInputs()
    {
        float a, b, c;
        cout << "Введіть сторони трикутника (A, B, C):\n";
        cout << "A = ";
        cin >> a;
        cout << "B = ";
        cin >> b;
        cout << "C = ";
        cin >> c;
        return {a, b, c};
    }

    void UI::ShowResult(float a, float b, float c, float perimeter)
    {
        cout << "A = " << a << '\t'
             << "B = " << b << '\t'
             << "C = " << c << '\n';

        if (perimeter > 0.0f)
        {
            cout << "Периметр P = " << perimeter << '\n';
            return;
        }

        cout << "Помилка: Трикутник з такими сторонами не можливий.\n";
    }
}
