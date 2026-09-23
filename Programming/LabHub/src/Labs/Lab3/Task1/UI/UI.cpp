#include "Labs/Lab3/Task1/UI/UI.h"
#include <iostream>

using std::cin;
using std::cout;

namespace Labs::Lab3::Task1
{
    Input UI::ShowInputs()
    {
        float x;
        cout << "Введіть x: ";
        cin >> x;
        return {x};
    }

    void UI::ShowResult(float x, float result)
    {
        cout << "x = " << x << '\n';
        cout << "y = " << result << '\n';
    }
}
