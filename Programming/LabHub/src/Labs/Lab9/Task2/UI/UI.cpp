#include "Labs/Lab9/Task2/UI/UI.h"
#include <iomanip>
#include <iostream>
#include <random>

using std::cout;
using std::fixed;
using std::setprecision;
using std::setw;

namespace Labs::Lab9::Task2
{
    void UI::FillArray(double tensor[3][3][2])
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_real_distribution<double> dist(1.0, 10.0);

        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                for (int k = 0; k < 2; ++k)
                {
                    tensor[i][j][k] = dist(gen);
                }
            }
        }
    }

    Input UI::ShowInputs()
    {
        Input input{};

        FillArray(input.tensor);

        cout << fixed << setprecision(2);
        cout << "Згенерований тензор T(3x3x2):\n";

        for (int i = 0; i < 3; ++i)
        {
            cout << "\nЗріз i = " << i << ":\n";
            for (int j = 0; j < 3; ++j)
            {
                for (int k = 0; k < 2; ++k)
                {
                    cout << setw(7) << input.tensor[i][j][k] << " ";
                }
                cout << "\n";
            }
        }

        return input;
    }

    void UI::ShowResult(double product)
    {
        cout << fixed << setprecision(2);
        cout << "\nДобуток елементів головної діагоналі: " << product << "\n";
    }
}