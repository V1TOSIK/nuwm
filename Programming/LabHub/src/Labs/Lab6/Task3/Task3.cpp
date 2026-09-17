#include "Labs/Lab6/Task3/Task3.h"
#include <iostream>
#include <iomanip>
#include <cmath>

namespace Lab6Tasks
{
    void Task3::Execute() {
        double x;
        double eps;

        std::cout << "Введіть x (за варіантом 0.1): ";
        std::cin >> x;
        std::cout << "Введіть точність eps (за варіантом 0.01): ";
        std::cin >> eps;

        double a_k = x;          // Перший член ряду (k = 1)
        double sum = 0.0;        // Сума ряду
        int k = 1;               // Лічильник доданків / ітерацій

        // Ітераційний процес завершується, якщо |a_k| <= eps
        while (std::abs(a_k) > eps) {
            sum += a_k;
            
            // Обчислення наступного члена за рекурентною формулою
            a_k = a_k * (x * x) / (2.0 * k * (2.0 * k + 1.0));
            k++;
        }
        
        // Враховуємо останній доданок, модуль якого став <= eps
        sum += a_k;

        std::cout << std::fixed << std::setprecision(8);
        std::cout << "\nРезультати:\n";
        std::cout << "Значення x: " << x << "\n";
        std::cout << "Обчислене значення f(x): " << sum << "\n";
        std::cout << "Кількість проведених ітерацій (число членів k): " << k << "\n";
        std::cout << "Контрольне значення std::sinh(x): " << std::sinh(x) << "\n";
    }
}