#include "Labs/Lab5/Task1/UI/UI.h"

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

namespace Labs::Lab5::Task1
{
    Input UI::ShowInputs()
    {
        Input input{};

        cout << "--- Введення даних для суми ---\n";
        cout << "Введіть початкове значення k: ";
        cin >> input.kStart;
        cout << "Введіть кінцеве значення k: ";
        cin >> input.kEnd;

        cout << "\n--- Введення даних для добутку ---\n";
        cout << "Введіть початкове значення m: ";
        cin >> input.m;
        cout << "Введіть кінцеве значення n: ";
        cin >> input.n;

        return input;
    }

    void UI::ShowResult(double sum, double product)
    {
        cout << "\n--- Результат обчислення ---\n";
        cout << fixed << setprecision(6);
        cout << "s = " << sum << '\n';
        cout << "y = " << product << '\n';
    }
}
