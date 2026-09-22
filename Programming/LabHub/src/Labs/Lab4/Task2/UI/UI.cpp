#include "Labs/Lab4/Task2/UI/UI.h"

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;

namespace Labs::Lab4::Task2
{
    Input UI::ShowInputs()
    {
        float zStart, zEnd, dz;
        cout << "Enter z_start: ";
        cin >> zStart;
        cout << "Enter z_end: ";
        cin >> zEnd;
        cout << "Enter dz: ";
        cin >> dz;
        return {zStart, zEnd, dz};
    }

    void UI::ShowResult(float zStart, float zEnd, float dz, const float* values, int count)
    {
        cout << "\n+------------+------------+\n";
        cout << "|     z      |     w      |\n";
        cout << "+------------+------------+\n";

        for (int i = 0; i < count; ++i)
        {
            const float z = zStart + i * dz;
            cout << "| " << std::setw(10) << std::fixed << std::setprecision(4) << z
                 << " | " << std::setw(10) << std::fixed << std::setprecision(4) << values[i]
                 << " |\n";
        }

        cout << "+------------+------------+\n";
    }
}
