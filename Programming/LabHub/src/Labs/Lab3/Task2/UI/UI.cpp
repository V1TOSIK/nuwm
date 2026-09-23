#include "Labs/Lab3/Task2/UI/UI.h"
#include <iostream>

using std::cin;
using std::cout;

namespace Labs::Lab3::Task2
{
    Input UI::ShowInputs()
    {
        float k, l;
        cout << "Введіть номер групи k: ";
        cin >> k;
        cout << "Введіть варіант l: ";
        cin >> l;
        return {k, l};
    }

    void UI::ShowResult(float a, float b, float c, bool foundValue)
    {
        cout << "\n--- Обраховані значення ---\n";
        cout << "a = " << a << '\n';
        cout << "b = " << b << '\n';
        cout << "c = " << c << '\n';

        cout << "\n--- Значення поза проміжком [-1; 5] ---\n";
        if (!foundValue)
        {
            cout << "Немає значень за межами проміжка.\n";
            return;
        }

        if (a < -1.0f || a > 5.0f) cout << "a = " << a << '\n';
        if (b < -1.0f || b > 5.0f) cout << "b = " << b << '\n';
        if (c < -1.0f || c > 5.0f) cout << "c = " << c << '\n';
    }
}
