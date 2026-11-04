#include "Labs/Lab8/Task1/UI/UI.h"
#include <iomanip>
#include <iostream>
#include <random>

using std::cout;
using std::fixed;
using std::setprecision;
using std::setw;

namespace Labs::Lab8::Task1
{
    void UI::FillArray(double matrix[4][4])
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_real_distribution<double> dist(-50.0, 50.0);

        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                matrix[i][j] = dist(gen);
            }
        }
    }

    Input UI::ShowInputs()
    {
        Input input{};

        FillArray(input.values);

        cout << fixed << setprecision(2);
        cout << "Згенерована матриця 4x4:\n";
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                cout << setw(8) << input.values[i][j] << " ";
            }
            cout << "\n";
        }

        return input;
    }

    void UI::ShowResult(double sumAbove, double sumBelow)
    {
        cout << fixed << setprecision(2);
        cout << "\nРезультати:\n";
        cout << "Сума вище головної діагоналі: " << sumAbove << "\n";
        cout << "Сума нижче головної діагоналі: " << sumBelow << "\n";

        if (sumAbove > sumBelow)
        {
            cout << "Висновок: сума вище головнаї діагоналі є більшою.\n";
        }
        else if (sumBelow > sumAbove)
        {
            cout << "Висновок: сума нижче головнаї діагоналі є більшою.\n";
        }
        else if (sumBelow == sumAbove)
        {
            cout << "Висновок: сума вище і нижче головної діагоналі однакова.\n";
        }
    }
}