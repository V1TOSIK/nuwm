#include "Labs/Lab6/Task1/UI/UI.h"

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

namespace Labs::Lab6::Task1
{
    Input UI::ShowInputs()
    {
        Input input{};

        cout << "Введіть x: ";
        cin >> input.x;
        cout << "Введіть n: ";
        cin >> input.n;
        cout << "Введіть eps: ";
        cin >> input.eps;

        return input;
    }

    void UI::ShowResult(double root, int iterations, double check)
    {
        cout << fixed << setprecision(6);
        cout << "\nРезультати:\n";
        cout << "Обчислений корінь: " << root << "\n";
        cout << "Кількість ітерацій: " << iterations << "\n";
        cout << "Перевірка степеня: " << check << "\n";
    }
}
