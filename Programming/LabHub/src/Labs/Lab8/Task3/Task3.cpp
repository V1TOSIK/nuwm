#include "Labs/Lab8/Task3/Task3.h"
#include <iostream>
#include <iomanip>
#include <cmath>

namespace Lab8Tasks
{
    void Task3::Execute() {
        int m, n;
        std::cout << "Введіть кількість векторів m (m <= 6): ";
        std::cin >> m;
        std::cout << "Введіть розмірність векторів n: ";
        std::cin >> n;

        if (m < 1 || m > 6 || n < 1 || n > 20) {
            std::cout << "Некоректні розміри.\n";
            return;
        }

        double A[6][20];

        std::cout << "Введіть координати векторів (по " << n << " чисел на вектор):\n";
        for (int i = 0; i < m; ++i) {
            std::cout << "Вектор #" << (i + 1) << ": ";
            for (int j = 0; j < n; ++j) {
                std::cin >> A[i][j];
            }
        }

        std::cout << std::fixed << std::setprecision(3);
        std::cout << "\nПочаткова матриця координат векторів A(" << m << ", " << n << "):\n";
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                std::cout << std::setw(8) << A[i][j] << " ";
            }
            std::cout << "\n";
        }

        double min_len = 0.0;
        int min_index = 1;

        std::cout << "\nОбчислені довжини векторів:\n";
        for (int i = 0; i < m; ++i) {
            double sum_sq = 0.0;
            for (int j = 0; j < n; ++j) {
                sum_sq += A[i][j] * A[i][j];
            }
            double length = std::sqrt(sum_sq);

            std::cout << "Довжина вектора #" << (i + 1) << ": " << length << "\n";

            if (i == 0 || length < min_len) {
                min_len = length;
                min_index = i + 1;
            }
        }

        std::cout << "\nВектор з мінімальною довжиною: #" << min_index 
                << " (довжина = " << min_len << ")\n";
    }
}