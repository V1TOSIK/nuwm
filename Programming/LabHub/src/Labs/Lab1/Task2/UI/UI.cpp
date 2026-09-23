#include "Labs/Lab1/Task2/UI/UI.h"
#include <iostream>

using std::cin;
using std::cout;

namespace Labs::Lab1::Task2
{
    Input UI::ShowInputs() {
        float x, c;
        cout << "x = ";
        cin >> x;
        cout << "c = ";
        cin >> c;
        return {x, c};
    }

    void UI::ShowResult(float x, float c, bool result) {
        cout << "\nx = " << x << '\t'
                  << "c = " << c << '\n';
        cout << "Result = " << (result ? "true" : "false") << '\n';
    }
}