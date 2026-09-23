#include "Labs/Lab3/Task3/UI/UI.h"
#include <iostream>

using std::cin;
using std::cout;

namespace Labs::Lab3::Task3
{
    Input UI::ShowInputs()
    {
        float x, y;
        cout << "Введіть координату точки (x): ";
        cin >> x;
        cout << "Введіть координату точки (y): ";
        cin >> y;
        return {x, y};
    }

    void UI::ShowResult(float x, float y, float r, bool isInside)
    {
        cout << "\n--- Введена інформація ---\n";
        cout << "Точка M: (" << x << "; " << y << ")\n";
        cout << "Радіус R: "<< r << "\n\n";

        cout << "--- Результат ---\n";
        if (isInside)
        {
            cout << "Точка M(" << x << "; " << y << ") ЗНАХОДИТЬСЯ в фігурі.\n";
            return;
        }

        cout << "Точка M(" << x << "; " << y << ") НЕ ЗНАХОДИТЬСЯ в фігурі.\n";
    }
}
