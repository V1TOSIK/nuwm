#include "Labs/Lab4/Task3/Task3.h"
#include <iostream>
#include <iomanip>
#include <cmath>

namespace Lab4Tasks
{
    void Task3::Execute() {
        float x_start, x_end, dx;
        float y_start, y_end, dy;

        // Введення меж і кроків
        std::cout << "Введіть x_start, x_end, dx (наприклад: 1 4 0.3): ";
        std::cin >> x_start >> x_end >> dx;

        std::cout << "Введіть y_start, y_end, dy (наприклад: -0.5 1.5 0.2): ";
        std::cin >> y_start >> y_end >> dy;

        // Виведення шапки таблиці
        std::cout << "\n+------------+------------+----------------+\n";
        std::cout << "|     x      |     y      |       z        |\n";
        std::cout << "+------------+------------+----------------+\n";

        const float eps = 1e-5f;

        for (float x = x_start; x <= x_end + eps; x += dx) {
            for (float y = y_start; y <= y_end + eps; y += dy) {
                std::cout << "| " << std::setw(10) << std::fixed << std::setprecision(2) << x
                        << " | " << std::setw(10) << std::fixed << std::setprecision(2) << y
                        << " | ";

                // Перевірка ОДЗ: cos(x + y) != 0
                if (std::abs(std::cos(x + y)) < eps) {
                    std::cout << std::setw(14) << "Не визнач." << " |\n";
                } else {
                    float tan_val = std::tan(x + y);
                    float z = (tan_val * tan_val) + std::pow(x, 3.0f);
                    std::cout << std::setw(14) << std::fixed << std::setprecision(4) << z << " |\n";
                }
            }
        }

        std::cout << "+------------+------------+----------------+\n";
    }
}