#include "Labs/Lab9/Task2/Task2.h"
#include <iostream>
#include <iomanip>
#include <cmath>

namespace Lab9Tasks
{
    void Task2::Execute() {
        const int D1 = 3;
        const int D2 = 3;
        const int D3 = 2;

        double T[D1][D2][D3];

        std::cout << "Введіть елементи тензора T(3x3x2) (всього 18 чисел):\n";
        for (int i = 0; i < D1; ++i) {
            for (int j = 0; j < D2; ++j) {
                for (int k = 0; k < D3; ++k) {
                    std::cout << "T[" << i << "][" << j << "][" << k << "] = ";
                    std::cin >> T[i][j][k];
                }
            }
        }

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nЗаданий тензор T(3x3x2) за шарами (k = 0, k = 1):\n";
        for (int k = 0; k < D3; ++k) {
            std::cout << "\nШар k = " << k << ":\n";
            for (int i = 0; i < D1; ++i) {
                for (int j = 0; j < D2; ++j) {
                    std::cout << std::setw(8) << T[i][j][k] << " ";
                }
                std::cout << "\n";
            }
        }

        // Головна діагональ тривимірного масиву (i == j == k)
        // Довжина діагоналі обмежується мінімальним із розмірів: min(3, 3, 2) = 2
        int diag_len = D1;
        if (D2 < diag_len) diag_len = D2;
        if (D3 < diag_len) diag_len = D3;

        double product = 1.0;

        std::cout << "\nЕлементи головної діагоналі (де i == j == k):\n";
        for (int idx = 0; idx < diag_len; ++idx) {
            std::cout << "T[" << idx << "][" << idx << "][" << idx << "] = " 
                    << T[idx][idx][idx] << "\n";
            product *= T[idx][idx][idx];
        }

        std::cout << "\nДобуток елементів головної діагоналі: " << product << "\n";
    }
}