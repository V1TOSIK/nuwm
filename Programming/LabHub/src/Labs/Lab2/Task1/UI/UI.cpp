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

    void UI::ShowResult(float a, float b, float result)
    {
        cout << "\na = " << a << '\t'
             << "b = " << b << '\n';
        cout << "Result = " << result << '\n';
    }
}
