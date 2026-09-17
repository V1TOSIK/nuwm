#include "Labs/Lab6/Task1/Task1.h"
#include <iostream>
#include <cmath>
#include <iomanip>

namespace Lab6Tasks
{    
    void Task1::Execute() {
        double x;
        int n;
        double eps;

        // Введення початкових даних
        std::cout << "Введіть x: ";
        std::cin >> x;
        std::cout << "Введіть n: ";
        std::cin >> n;
        std::cout << "Введіть точність eps: ";
        std::cin >> eps;

        double y_curr = x;
        double y_next = 0.0;
        int iterations = 0;
        double diff = 0.0;

        do {
            // y_(i+1) = (1/n) * (x / y_i^(n-1) + (n-1)*y_i)
            y_next = (1.0 / n) * (x / std::pow(y_curr, n - 1) + (n - 1) * y_curr);
            diff = std::abs(y_next - y_curr);
            y_curr = y_next;
            iterations++;
        } while (diff > eps);

        std::cout << std::fixed << std::setprecision(6);
        std::cout << "\nРезультати:\n";
        std::cout << "Обчислене значення кореня: " << y_next << "\n";
        std::cout << "Кількість ітерацій: " << iterations << "\n";
        std::cout << "Перевірка через std::pow:  " << std::pow(x, 1.0 / n) << "\n";
    }
}