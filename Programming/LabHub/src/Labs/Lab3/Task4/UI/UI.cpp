#include "Labs/Lab3/Task4/UI/UI.h"
#include <iostream>

using std::cin;
using std::cout;

namespace Labs::Lab3::Task4
{
    Input UI::ShowInputs()
    {
        float a, b, c;
        cout << "Введіть дохід компанії A: ";
        cin >> a;
        cout << "Введіть дохід компанії B: ";
        cin >> b;
        cout << "Введіть дохід компанії C: ";
        cin >> c;
        return {a, b, c};
    }

    void UI::ShowResult(float average, float minProfit, float difference)
    {
        cout << "\n--- Результат ---\n";
        cout << "Середній дохід: " << average << "\n";
        cout << "Мінімальний дохід: " << minProfit << "\n";
        cout << "Різниця між мінімальним та середнім доходом: " << difference << "\n";
    }
}
