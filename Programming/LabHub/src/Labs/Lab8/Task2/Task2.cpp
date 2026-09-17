#include "Labs/Lab8/Task2/Task2.h"
#include <iostream>
#include <iomanip>
#include <cmath>

namespace Lab8Tasks
{
    void Task2::Execute() {
        int m, n;
        std::cout << "Введіть кількість рядків m (m <= 5): ";
        std::cin >> m;
        std::cout << "Введіть кількість стовпчиків n (n <= 8): ";
        std::cin >> n;

        if (m < 1 || m > 5 || n < 1 || n > 8) {
            std::cout << "Помилка: розміри виходять за межі обмежень (m <= 5, n <= 8).\n";
            return;
        }

        double A[5][8];

        std::cout << "Введіть елементи матриці A (" << m << "x" << n << "):\n";
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                std::cin >> A[i][j];
            }
        }

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nПочаткова матриця A:\n";
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                std::cout << std::setw(8) << A[i][j] << " ";
            }
            std::cout << "\n";
        }

        std::cout << "\nРезультати обчислень для кожного стовпчика:\n";
        for (int j = 0; j < n; ++j) {
            double max_val = A[0][j];
            double min_val = A[0][j];

            for (int i = 1; i < m; ++i) {
                if (A[i][j] > max_val) {
                    max_val = A[i][j];
                }
                if (A[i][j] < min_val) {
                    min_val = A[i][j];
                }
            }

            double diff = max_val - min_val;

            std::cout << "Стовпчик #" << (j + 1) << ": "
                    << "max = " << max_val << ", "
                    << "min = " << min_val << ", "
                    << "різниця (max - min) = " << diff << "\n";
        }
    }
}