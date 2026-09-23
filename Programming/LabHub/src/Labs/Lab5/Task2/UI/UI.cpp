#include "Labs/Lab5/Task2/UI/UI.h"

#include <iostream>
#include <utility>

using std::cin;
using std::cout;
using std::swap;

namespace Labs::Lab5::Task2
{
    Input UI::ShowInputs()
    {
        Input input{};

        cout << "Введіть початок діапазону: ";
        cin >> input.startNumber;
        cout << "Введіть кінець діапазону: ";
        cin >> input.endNumber;

        if (input.startNumber > input.endNumber)
        {
            swap(input.startNumber, input.endNumber);
        }

        return input;
    }

    void UI::ShowResult(int startNumber, int endNumber, unsigned long long product)
    {
        cout << "\n--- Результат ---\n";
        cout << "Діапазон: [" << startNumber << ", " << endNumber << "]\n";
        cout << "Добуток непарних чисел = " << product << '\n';
    }
}
