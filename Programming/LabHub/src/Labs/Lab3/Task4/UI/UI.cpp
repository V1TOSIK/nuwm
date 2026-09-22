#include "Labs/Lab3/Task4/UI/UI.h"

#include <iostream>

using std::cin;
using std::cout;

namespace Labs::Lab3::Task4
{
    Input UI::ShowInputs()
    {
        float a, b, c;
        cout << "Enter company profit a: ";
        cin >> a;
        cout << "Enter company profit b: ";
        cin >> b;
        cout << "Enter company profit c: ";
        cin >> c;
        return {a, b, c};
    }

    void UI::ShowResult(float average, float minProfit, float difference)
    {
        cout << "\n--- Calculation results ---\n";
        cout << "Average profit: " << average << "\n";
        cout << "Minimum profit: " << minProfit << "\n";
        cout << "Difference between average and minimum: " << difference << "\n";
    }
}
