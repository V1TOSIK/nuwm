#include "Labs/Lab9/Task1/UI/UI.h"
#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;
using std::vector;

namespace Labs::Lab9::Task1
{
    Input UI::ShowInputs()
    {
        Input input{};

        cout << "Введіть кількість компаній M: ";
        cin >> input.firmsCount;
        cout << "Введіть кількість місяців N: ";
        cin >> input.monthsCount;

        if (input.firmsCount <= 0 ||
            input.monthsCount <= 0 ||
            input.firmsCount > 50 ||
            input.monthsCount > 50)
        {
            cout << "Помилка: Невірні вхідні дані.\n";
            return input;
        }

        
        cout << "Введіть прибуток за кожен місяць для компаній:\n";
        for (int firm = 0; firm < input.firmsCount; ++firm)
        {
            cout << "Компанія #" << (firm + 1) << " (" << input.monthsCount << " ): ";
            for (int month = 0; month < input.monthsCount; ++month)
            {
                cin >> input.profits[firm][month];
            }
        }

        return input;
    }

    void UI::ShowResult(const vector<Result>& result)
    {
        cout << fixed << setprecision(2);
        cout << "\nРезультат (найбільший прибуток за кожен місяць):\n";

        for (const auto& entry : result)
        {
            cout << "Місяць #" << entry.month
                      << " -> Найбільший прибуток: " << entry.maxProfit
                      << " (Компанія #" << entry.bestFirm << ")\n";
        }
    }
}
