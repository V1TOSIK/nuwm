#include "Labs/Lab4/Task2/UI/UI.h"

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::setprecision;
using std::setw;
using std::fixed;
using std::size_t;

namespace Labs::Lab4::Task2
{
    Input UI::ShowInputs()
    {
        float zStart, zEnd, dz;
        cout << "Введіть z_поч: ";
        cin >> zStart;
        cout << "Введіть z_кін: ";
        cin >> zEnd;
        cout << "Введіть dz: ";
        cin >> dz;
        return {zStart, zEnd, dz};
    }

    void UI::ShowResult(float zStart, float dz, const std::vector<float>& values)
    {
        cout << "\n+------------+------------+\n";
        cout << "|     z      |     w      |\n";
        cout << "+------------+------------+\n";

        for (size_t i = 0; i < values.size(); ++i)
        {
            const float z = zStart + static_cast<float>(i) * dz;
            cout << "| " << setw(10) << fixed << setprecision(4) << z
                 << " | " << setw(10) << fixed << setprecision(4) << values[i]
                 << " |\n";
        }

        cout << "+------------+------------+\n";
    }
}
