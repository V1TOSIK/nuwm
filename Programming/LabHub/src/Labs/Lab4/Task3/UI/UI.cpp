#include "Labs/Lab4/Task3/UI/UI.h"

#include <cmath>
#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;

namespace Labs::Lab4::Task3
{
    Input UI::ShowInputs()
    {
        float xStart, xEnd, dx;
        float yStart, yEnd, dy;

        cout << "Enter x_start, x_end, dx: ";
        cin >> xStart >> xEnd >> dx;
        cout << "Enter y_start, y_end, dy: ";
        cin >> yStart >> yEnd >> dy;

        return {xStart, xEnd, dx, yStart, yEnd, dy};
    }

    void UI::ShowResult(float xStart, float xEnd, float dx, float yStart, float yEnd, float dy)
    {
        cout << "\n+------------+------------+----------------+\n";
        cout << "|     x      |     y      |       z        |\n";
        cout << "+------------+------------+----------------+\n";

        const float eps = 1e-5f;

        for (float x = xStart; x <= xEnd + eps; x += dx)
        {
            for (float y = yStart; y <= yEnd + eps; y += dy)
            {
                cout << "| " << std::setw(10) << std::fixed << std::setprecision(2) << x
                     << " | " << std::setw(10) << std::fixed << std::setprecision(2) << y
                     << " | ";

                if (std::abs(std::cos(x + y)) < eps)
                {
                    cout << std::setw(14) << "Not defined" << " |\n";
                }
                else
                {
                    const float tanValue = std::tan(x + y);
                    const float z = tanValue * tanValue + std::pow(x, 3.0f);
                    cout << std::setw(14) << std::fixed << std::setprecision(4) << z << " |\n";
                }
            }
        }

        cout << "+------------+------------+----------------+\n";
    }
}
