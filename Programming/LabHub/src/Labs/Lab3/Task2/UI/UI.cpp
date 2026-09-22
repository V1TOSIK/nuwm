#include "Labs/Lab3/Task2/UI/UI.h"

#include <iostream>

using std::cin;
using std::cout;

namespace Labs::Lab3::Task2
{
    Input UI::ShowInputs()
    {
        float k, l;
        cout << "Enter group number k: ";
        cin >> k;
        cout << "Enter variant number l: ";
        cin >> l;
        return {k, l};
    }

    void UI::ShowResult(float a, float b, float c, bool foundValue)
    {
        cout << "\n--- Calculated values ---\n";
        cout << "a = " << a << '\n';
        cout << "b = " << b << '\n';
        cout << "c = " << c << '\n';

        cout << "\n--- Numbers outside [-1; 5] ---\n";
        if (!foundValue)
        {
            cout << "No numbers are outside the specified range.\n";
            return;
        }

        if (a < -1.0f || a > 5.0f) cout << "a = " << a << '\n';
        if (b < -1.0f || b > 5.0f) cout << "b = " << b << '\n';
        if (c < -1.0f || c > 5.0f) cout << "c = " << c << '\n';
    }
}
