#include "Labs/Lab1/Task4/UI/UI.h"
#include <iostream>

using std::cout;

namespace Labs::Lab1::Task4
{
    void UI::ShowResult() {
        cout << "z=(exp(exp*lnx)-exp(-x)+0,12)/(sqrt(sin(y-1)))\n"; 
        cout << "z=(exp(exp(log10(x)))-exp(x*-1)+0.12f)/(sqrt(sin(y-1)));\n"; 
    }
}