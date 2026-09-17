#include "Labs/Lab5/Task1/Task1.h"
#include <iostream>
#include <cmath>
#include <iomanip>

namespace Lab5Tasks
{    
    void Task1::Execute() {
        int k_start, k_end;
        int m, n;

        // 1. Введення меж для суми
        std::cout << "--- Введення даних для суми ---\n";
        std::cout << "Введіть початкове значення k (за замовчуванням 4): ";
        std::cin >> k_start;
        std::cout << "Введіть кінцеве значення k (за замовчуванням 15): ";
        std::cin >> k_end;

        // 2. Введення меж для добутку
        std::cout << "\n--- Введення даних для добутку ---\n";
        std::cout << "Введіть початкове значення m (за замовчуванням 3): ";
        std::cin >> m;
        std::cout << "Введіть кінцеве значення n (за замовчуванням 10): ";
        std::cin >> n;

        // 3. Обчислення
        double s = Task1::CalculateSum(k_start, k_end);
        double y = Task1::CalculateProduct(m, n);

        // 4. Виведення результатів
        std::cout << "\n--- Результати обчислень ---\n";
        std::cout << std::fixed << std::setprecision(6);
        std::cout << "Сума s = " << s << '\n';
        std::cout << "Добуток y = " << y << '\n';
    }

    double Task1::CalculateSum(int start, int end) {
        double sum = 0.0;
        for (int k = start; k <= end; ++k) {
            double sign = (k % 2 == 0) ? 1.0 : -1.0;
            double numerator = static_cast<double>(k * k + 2 * k + 1);
            double denominator = static_cast<double>(k + 4);
            sum += sign * (numerator / denominator);
        }
        return sum;
    }

    double Task1::CalculateProduct(int start, int end) {
        double product = 1.0;
        for (int k = start; k <= end; ++k) {
            double numerator = std::pow(k, 3.0);
            double denominator = k + std::pow(2.0, k);
            product *= (numerator / denominator);
        }
        return product;
    }
}