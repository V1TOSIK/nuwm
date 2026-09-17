#include "Labs/Lab9/Task1/Task1.h"
#include <iostream>
#include <iomanip>

namespace Lab9Tasks
{
    void Task1::Execute() {
        int m, n;
        std::cout << "Введіть кількість фірм M: ";
        std::cin >> m;
        std::cout << "Введіть кількість місяців N: ";
        std::cin >> n;

        if (m <= 0 || n <= 0 || m > 50 || n > 50) {
            std::cout << "Помилка: некоректні розміри.\n";
            return;
        }

        double X[50][50];

        std::cout << "Введіть прибутки для кожної фірми помісячно:\n";
        for (int i = 0; i < m; ++i) {
            std::cout << "Фірма #" << (i + 1) << " (" << n << " значень): ";
            for (int j = 0; j < n; ++j) {
                std::cin >> X[i][j];
            }
        }

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nТаблиця прибутків (" << m << " фірм на " << n << " місяців):\n";
        for (int i = 0; i < m; ++i) {
            std::cout << "Фірма #" << std::setw(2) << (i + 1) << ": ";
            for (int j = 0; j < n; ++j) {
                std::cout << std::setw(8) << X[i][j] << " ";
            }
            std::cout << "\n";
        }

        std::cout << "\nРезультати (найбільший прибуток за кожен місяць):\n";

        // Проходимо окремо по кожному місяцю (стовпчик j)
        for (int j = 0; j < n; ++j) {
            double max_profit = X[0][j];
            int best_firm = 1;

            // Шукаємо фірму (рядок i) з найбільшим прибутком у цьому місяці
            for (int i = 1; i < m; ++i) {
                if (X[i][j] > max_profit) {
                    max_profit = X[i][j];
                    best_firm = i + 1;
                }
            }

            std::cout << "Місяць #" << (j + 1) 
                    << " -> Найбільший прибуток: " << max_profit 
                    << " (Фірма #" << best_firm << ")\n";
        }
    }
}