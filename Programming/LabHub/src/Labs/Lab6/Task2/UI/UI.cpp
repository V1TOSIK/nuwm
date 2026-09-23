#include "Labs/Lab6/Task2/UI/UI.h"

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

namespace Labs::Lab6::Task2
{
    Input UI::ShowInputs()
    {
        Input input{};

        cout << "Введіть початкове наближення x0: ";
        cin >> input.x0;
        cout << "Введіть точність eps: ";
        cin >> input.eps;

        return input;
    }

    void UI::ShowResult(const Result& result)
    {
        cout << fixed << setprecision(6);
        if (result.usedConvergentFormula)
            cout << "\nПряма формула розбіглася. Використовується еквівалентне збіжне перетворення.\n";

        cout << "\nОбчислений корінь: " << result.root << "\n";
        cout << "Ітерації: " << result.iterations << "\n";
    }
}
