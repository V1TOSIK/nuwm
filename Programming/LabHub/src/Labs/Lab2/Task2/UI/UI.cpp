#include "Labs/Lab2/Task2/UI/UI.h"

#include <iostream>

using std::cin;
using std::cout;

namespace Labs::Lab2::Task2
{
    Input UI::ShowInputs()
    {
        float a, b, c;
        cout << "Enter triangle sides (A, B, C):\n";
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
            cout << "Triangle perimeter P = " << perimeter << '\n';
            return;
        }

        cout << "Error: triangle with such sides cannot exist.\n";
    }
}
