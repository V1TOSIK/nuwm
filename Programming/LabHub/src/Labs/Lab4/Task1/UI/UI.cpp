#include "Labs/Lab4/Task1/UI/UI.h"

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::setprecision;
using std::setw;
using std::fixed;
using std::size_t;

namespace Labs::Lab4::Task1
{
    Input UI::ShowInputs()
    {
        float xStart, xEnd, dx;
        int n;

        cout << "Введіть x_поч: ";
        cin >> xStart;
        cout << "Введіть x_кін: ";
        cin >> xEnd;
        cout << "Введіть dx: ";
        cin >> dx;
        cout << "Введіть n: ";
        cin >> n;

        return {xStart, xEnd, dx, n};
    }

    void UI::ShowResult(float xStart, float xEnd, float dx, int n, const std::vector<float>& values)
    {
        cout << "\n1. Табулювання на проміжку [" << xStart << "; " << xEnd << "] з dx = " << dx << ":\n";
        cout << "+------+------------+--------------+\n";
        cout << "|  №   |     x      |      y       |\n";
        cout << "+------+------------+--------------+\n";

        for (size_t i = 0; i < values.size(); ++i)
        {
            cout << "| " << setw(4) << i + 1
                 << " | " << setw(10) << fixed << setprecision(4) << (xStart + i * dx)
                 << " | " << setw(12) << fixed << setprecision(4) << values[i]
                 << " |\n";
        }

        cout << "+------+------------+--------------+\n";

        cout << "\n2. Табулювання для " << n << " точок, починаючи з x = " << xStart << ":\n";
        cout << "+------+------------+--------------+\n";
        cout << "|  №   |     x      |      y       |\n";
        cout << "+------+------------+--------------+\n";

        for (int i = 0; i < n && static_cast<size_t>(i) < values.size(); ++i)
        {
            const float x = xStart + static_cast<float>(i) * dx;
            cout << "| " << setw(4) << i + 1
                 << " | " << setw(10) << fixed << setprecision(4) << x
                 << " | " << setw(12) << fixed << setprecision(4) << values[i]
                 << " |\n";
        }

        cout << "+------+------------+--------------+\n";
    }
}
