#include "Labs/Lab7/Task4/UI/UI.h"

#include <iomanip>
#include <iostream>

using std::cout;
using std::cin;
using std::fixed;
using std::setprecision;
using std::vector;

namespace Labs::Lab7::Task4
{
    Input UI::ShowInputs()
    {
        Input input{};

        cout << "Введіть кількість працівників N: ";
        cin >> input.count;
        if (input.count <= 0 || input.count > 100)
        {
            input.count = 0;
            return input;
        }

        cout << "Введіть зарплати кожного працівника:\n";
        for (int i = 0; i < input.count; ++i)
        {
            cout << "Працівник №" << (i + 1) << ": ";
            cin >> input.salaries[i];
        }

        cout << "Введіть межу зарплати M0: ";
        cin >> input.threshold;

        return input;
    }

    void UI::ShowResult(const vector<Employee>& employees, double threshold, bool valid)
    {
        if (!valid)
        {
            cout << "Некоректна кількість зарплат.\n";
            return;
        }

        cout << fixed << setprecision(2);
        cout << "\nПрацівники із зарплатою <= " << threshold << ":\n";

        if (employees.empty())
        {
            cout << "Працівників, що відповідають межі, не знайдено.\n";
            return;
        }

        for (const auto& employee : employees)
        {
            cout << "Номер працівника: " << employee.number
                      << ", зарплата: " << employee.salary << "\n";
        }
    }
}
