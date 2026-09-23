#include "Labs/Lab4/Task3/UI/UI.h"

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;
using std::setw;

namespace Labs::Lab4::Task3
{
    Input UI::ShowInputs()
    {
        float xStart, xEnd, dx;
        float yStart, yEnd, dy;

        cout << "Введіть x_поч, x_кін, dx: ";
        cin >> xStart >> xEnd >> dx;
        cout << "Введіть y_поч, y_кін, dy: ";
        cin >> yStart >> yEnd >> dy;

        return {xStart, xEnd, dx, yStart, yEnd, dy};
    }

    void UI::ShowResult(const std::vector<PointResult>& result)
    {
        cout << "\n+------------+------------+----------------+\n";
        cout << "|     x      |     y      |       z        |\n";
        cout << "+------------+------------+----------------+\n";

        for (const auto& point : result)
        {
            cout << "| " << setw(10) << fixed << setprecision(2) << point.x
                 << " | " << setw(10) << fixed << setprecision(2) << point.y
                 << " | ";

            if (!point.defined)
                cout << setw(14) << "Не визначено" << " |\n";
            else
                cout << setw(14) << fixed << setprecision(4) << point.z << " |\n";
        }

        cout << "+------------+------------+----------------+\n";
    }
}
