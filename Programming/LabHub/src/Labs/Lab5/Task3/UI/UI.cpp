#include "Labs/Lab5/Task3/UI/UI.h"

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

namespace Labs::Lab5::Task3
{
    Input UI::ShowInputs()
    {
        Input input{};

        cout << "Введіть z1: ";
        cin >> input.z1;
        cout << "Введіть delta_z: ";
        cin >> input.deltaZ;

        return input;
    }

    void UI::ShowResult(double result)
    {
        cout << "\n--- Результат ---\n";
        cout << fixed << setprecision(6);
        cout << "Сума y = " << result << '\n';
    }
}
