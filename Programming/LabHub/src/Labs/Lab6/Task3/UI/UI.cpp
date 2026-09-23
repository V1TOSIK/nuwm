#include "Labs/Lab6/Task3/UI/UI.h"

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

namespace Labs::Lab6::Task3
{
    Input UI::ShowInputs()
    {
        Input input{};

        cout << "Введіть x: ";
        cin >> input.x;
        cout << "Введіть eps: ";
        cin >> input.eps;

        return input;
    }

    void UI::ShowResult(double x, double sum, int iterations, double check)
    {
        cout << fixed << setprecision(8);
        cout << "\nРезультати:\n";
        cout << "x: " << x << "\n";
        cout << "Обчислене f(x): " << sum << "\n";
        cout << "Ітерації: " << iterations << "\n";
        cout << "sinh(x): " << check << "\n";
    }
}
