#include "Labs/Lab4/Task1/UI/UI.h"

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;

namespace Labs::Lab4::Task1
{
    Input UI::ShowInputs()
    {
        float xStart, xEnd, dx;
        int n;

        cout << "Enter x_start: ";
        cin >> xStart;
        cout << "Enter x_end: ";
        cin >> xEnd;
        cout << "Enter dx: ";
        cin >> dx;
        cout << "Enter n: ";
        cin >> n;

        return {xStart, xEnd, dx, n};
    }

    void UI::ShowResult(float xStart, float xEnd, float dx, int n, const float* values, int count)
    {
        cout << "\n1. Tabulation on the interval [" << xStart << "; " << xEnd << "] with dx = " << dx << ":\n";
        cout << "+------+------------+--------------+\n";
        cout << "|  №   |     x      |      y       |\n";
        cout << "+------+------------+--------------+\n";

        for (int i = 0; i < count; ++i)
        {
            cout << "| " << std::setw(4) << i + 1
                 << " | " << std::setw(10) << std::fixed << std::setprecision(4) << (xStart + i * dx)
                 << " | " << std::setw(12) << std::fixed << std::setprecision(4) << values[i]
                 << " |\n";
        }

        cout << "+------+------------+--------------+\n";

        cout << "\n2. Tabulation for " << n << " points starting from x = " << xStart << ":\n";
        cout << "+------+------------+--------------+\n";
        cout << "|  №   |     x      |      y       |\n";
        cout << "+------+------------+--------------+\n";

        for (int i = 0; i < n; ++i)
        {
            const float x = xStart + i * dx;
            cout << "| " << std::setw(4) << i + 1
                 << " | " << std::setw(10) << std::fixed << std::setprecision(4) << x
                 << " | " << std::setw(12) << std::fixed << std::setprecision(4) << values[i]
                 << " |\n";
        }

        cout << "+------+------------+--------------+\n";
    }
}
