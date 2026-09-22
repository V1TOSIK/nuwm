#include "Labs/Lab3/Task3/UI/UI.h"

#include <iostream>

using std::cin;
using std::cout;

namespace Labs::Lab3::Task3
{
    Input UI::ShowInputs()
    {
        float x, y;
        cout << "Enter point x: ";
        cin >> x;
        cout << "Enter point y: ";
        cin >> y;
        return {x, y};
    }

    void UI::ShowResult(float x, float y, bool isInside)
    {
        cout << "\n--- Input information ---\n";
        cout << "Point M: (" << x << "; " << y << ")\n";
        cout << "Radius R = 3\n\n";

        cout << "--- Result ---\n";
        if (isInside)
        {
            cout << "Point M(" << x << "; " << y << ") BELONGS to the specified figure.\n";
            return;
        }

        cout << "Point M(" << x << "; " << y << ") DOES NOT BELONG to the specified figure.\n";
    }
}
