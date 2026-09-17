#include "Labs/Lab8/Task1/Task1.h"
#include <iostream>
#include <iomanip>

namespace Lab8Tasks
{
    void Task1::Execute() {
        const int N = 4;
        double B[N][N];

        std::cout << "Введіть елементи матриці B (" << N << "x" << N << "):\n";
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                std::cin >> B[i][j];
            }
        }

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nЗадана матриця B:\n";
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                std::cout << std::setw(8) << B[i][j] << " ";
            }
            std::cout << "\n";
        }

        double sum_above = 0.0;
        double sum_below = 0.0;

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                if (j > i) {
                    sum_above += B[i][j]; // Елемент вище головної діагоналі
                } else if (i > j) {
                    sum_below += B[i][j]; // Елемент нижче головної діагоналі
                }
            }
        }

        std::cout << "\nРезультати обчислень:\n";
        std::cout << "Сума елементів вище головної діагоналі: " << sum_above << "\n";
        std::cout << "Сума елементів нижче головної діагоналі: " << sum_below << "\n\n";

        if (sum_above > sum_below) {
            std::cout << "Висновок: сума елементів вище головної діагоналі більша.\n";
        } else if (sum_below > sum_above) {
            std::cout << "Висновок: сума елементів нижче головної діагоналі більша.\n";
        } else {
            std::cout << "Висновок: суми рівні між собою.\n";
        }
    }
}