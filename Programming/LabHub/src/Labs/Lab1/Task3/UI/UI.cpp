#include "Labs/Lab1/Task3/UI/UI.h"
#include <iostream>

using std::cout;

namespace Labs::Lab1::Task3
{
    void UI::ShowResult() {
        cout << "0.3E2 -> 3 * 10\n"; 
        cout << "57700E-2 -> 5.77 * 10^2\n"; 
    }
}