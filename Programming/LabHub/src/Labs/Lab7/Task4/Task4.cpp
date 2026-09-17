#include "Labs/Lab7/Task4/Task4.h"
#include <iostream>
#include <iomanip>
#include <cmath>

namespace Lab7Tasks
{
    void Task4::Execute() {
        int n;
        std::cout << "Введіть кількість працівників N: ";
        std::cin >> n;

        if (n <= 0) {
            std::cout << "Кількість працівників має бути більшою за 0.\n";
            return;
        }

        const int MAX_SIZE = 100;
        if (n > MAX_SIZE) {
            std::cout << "Перевищено максимальний ліміт (" << MAX_SIZE << ").\n";
            return;
        }

        double M[MAX_SIZE];
        std::cout << "Введіть заробітну плату для кожного з " << n << " працівників:\n";
        for (int i = 0; i < n; ++i) {
            std::cout << "Працівник #" << (i + 1) << ": ";
            std::cin >> M[i];
        }

        double m0;
        std::cout << "\nВведіть граничне значення заробітної плати M0: ";
        std::cin >> m0;

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nСписок працівників, чия зарплата не перевищує " << m0 << ":\n";

        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (M[i] <= m0) {
                std::cout << "Номер працівника: " << (i + 1)
                        << ", заробітна плата: " << M[i] << "\n";
                count++;
            }
        }

        if (count == 0) {
            std::cout << "Працівників із зарплатою <= " << m0 << " не знайдено.\n";
        }
    }
}