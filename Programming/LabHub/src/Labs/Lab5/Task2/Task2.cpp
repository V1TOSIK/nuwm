#include "Labs/Lab5/Task2/Task2.h"
#include <iomanip>
#include <iostream>
#include <cmath>

namespace Lab5Tasks
{
    void Task2::Execute() {
        int start_num, end_num;

        // 1. Введення меж (дозволяє ввести довільні або стандартні 10 та 30)
        std::cout << "Введіть початкове число діапазону (наприклад, 10): ";
        std::cin >> start_num;
        std::cout << "Введіть кінцеве число діапазону (наприклад, 30): ";
        std::cin >> end_num;

        // Якщо межі введено у зворотному порядку — коригуємо
        if (start_num > end_num) {
            std::swap(start_num, end_num);
        }

        // 2. Виведення значень вхідної інформації
        std::cout << "\n--- Вхідна інформація ---\n";
        std::cout << "Початкова межа: " << start_num << '\n';
        std::cout << "Кінцева межа:   " << end_num << '\n';

        // 3. Обчислення добутку непарних натуральних чисел
        unsigned long long product = 1;
        int odd_count = 0;

        std::cout << "\nНепарні числа у вказаному проміжку: ";
        for (int i = start_num; i <= end_num; ++i) {
            if (i > 0 && i % 2 != 0) {
                std::cout << i << " ";
                product *= i;
                odd_count++;
            }
        }
        std::cout << "\n";

        // 4. Виведення результатів
        std::cout << "\n--- Результати обчислень ---\n";
        if (odd_count > 0) {
            std::cout << "Кількість перемножених чисел: " << odd_count << '\n';
            std::cout << "Добуток усіх непарних чисел:  " << product << '\n';
        } else {
            std::cout << "У вказаному проміжку немає непарних натуральних чисел.\n";
        }
    }
}