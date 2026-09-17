#include "Labs/Lab5/Task3/Task3.h"
#include <iostream>
#include <iomanip>
#include <cmath>

namespace Lab5Tasks
{
    void Task3::Execute() {
        double z1, delta_z;

        // Введення початкових параметрів
        std::cout << "Введіть початкове значення аргументу z1 (за замовчуванням 1.47): ";
        std::cin >> z1;
        std::cout << "Введіть крок зміни аргументу delta_z (за замовчуванням 0.02): ";
        std::cin >> delta_z;

        // Виведення вхідної інформації
        std::cout << "\n--- Вхідні дані ---\n";
        std::cout << "z1      = " << z1 << '\n';
        std::cout << "delta_z = " << delta_z << '\n';

        // Обчислення суми без масиву
        double y = 0.0;
        double z_prev = z1;
        double z_curr = 0.0;

        for (int n = 2; n <= 15; ++n) {
            // Рекурентне обчислення поточного z_n
            z_curr = z_prev * n - delta_z;

            double denominator = z_prev + z_curr;
            if (std::abs(denominator) < 1e-12) {
                std::cout << "Помилка: ділення на нуль при n = " << n << '\n';
                continue;
            }

            double numerator = std::pow(z_prev, 3) - std::pow(z_curr, 2);
            double term = numerator / denominator;

            y += term;

            // Зсув для наступного кроку (z_{n-1} стає z_n)
            z_prev = z_curr;
        }

        // Виведення результату
        std::cout << "\n--- Результат обчислення ---\n";
        std::cout << std::fixed << std::setprecision(6);
        std::cout << "Сума y = " << y << '\n';
    }
}