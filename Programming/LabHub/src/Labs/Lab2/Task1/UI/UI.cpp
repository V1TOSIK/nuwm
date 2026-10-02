#include "Labs/Lab2/Task1/UI/UI.h"
#include <iostream>

using std::cin;
using std::cout;

namespace Labs::Lab2::Task1
{
    Input UI::ShowInputs()
    {
        float a, b;
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        return {a, b};
    }

    void UI::ShowResult(float x, float y, float z)
    {
        cout << "\nx = " << y << '\t'
             << "y = " << x << '\n';
        cout << "Result = " << z << '\n';
    }
}