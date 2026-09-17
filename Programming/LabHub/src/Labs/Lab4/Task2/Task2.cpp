#include "Labs/Lab4/Task2/Task2.h"
#include <iomanip>
#include <iostream>
#include <cmath>

namespace Lab4Tasks
{
    float Task2::CalculateFunction(float z) {
        const float half_pi = 1.57079632679f;

        if (z >= -2.0f && z <= 0.5f) {
            return z - std::sin(z);
        } else if (z > 0.5f && z <= 3.0f) {
            return half_pi - std::atan(z - 0.3f);
        }
        
        return NAN; // Значення за межами області визначення [-2; 3]
    }

    void Task2::Execute() {
        float z_start, z_end, dz;

        // Введення меж та кроку
        std::cout << "Введіть початкове значення z (наприклад, -2): ";
        std::cin >> z_start;
        std::cout << "Введіть кінцеве значення z (наприклад, 3): ";
        std::cin >> z_end;
        std::cout << "Введіть крок dz (наприклад, 0.5): ";
        std::cin >> dz;

        // Виведення таблиці пар значень (z, w)
        std::cout << "\n+------------+------------+\n";
        std::cout << "|     z      |     w      |\n";
        std::cout << "+------------+------------+\n";

        for (float z = z_start; z <= z_end + 1e-5f; z += dz) {
            float w = Task2::CalculateFunction(z);

            std::cout << "| " << std::setw(10) << std::fixed << std::setprecision(4) << z 
                    << " | ";

            if (std::isnan(w)) {
                std::cout << std::setw(10) << "Не визнач." << " |\n";
            } else {
                std::cout << std::setw(10) << std::fixed << std::setprecision(4) << w << " |\n";
            }
        }

        std::cout << "+------------+------------+\n";
    }
}