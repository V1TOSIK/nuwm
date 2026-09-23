#include "Labs/Lab1/Task1/UI/UI.h"
#include <iostream>

using std::cin;
using std::cout;

namespace Labs::Lab1::Task1
{
    Input UI::ShowInputs() {
        float x, k;
        cout << "Введiть x: ";
        cin >> x;
        cout << "Введiть k: ";
        cin >> k;
        return {x, k};
    }

    void UI::ShowResult(float x, float k, float result) {
        cout << "x = " << x << '\t'
                  << "k = " << k << '\n';
        cout << "Результат = " << result << '\n';
    }
}