#include "Labs/Lab3/Task2/Task2.h"
#include <iostream>
#include <cmath>

namespace Lab3Tasks
{
    void Task2::Execute() {
        float k, l;
    std::cout << "Введіть номер групи k: ";
    std::cin >> k;
    std::cout << "Введіть номер варіанту l: ";
    std::cin >> l;

    // 1. Обчислення виразів
    float a = (l + k) / 5.0f;
    float b = l * k - 3.5f;
    float c = (l - k) / k;

    // Виведення обчислених значень
    std::cout << "\n--- Обчислені значення ---\n";
    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';
    std::cout << "c = " << c << '\n';

    // 2. Виконання завдання варіанту (вибрати числа поза проміжком [-1; 5])
    std::cout << "\n--- Числа, що лежать поза проміжком [-1; 5] ---\n";
    
    bool found = false;
    
    if (a < -1.0f || a > 5.0f) {
        std::cout << "a = " << a << '\n';
        found = true;
    }
    if (b < -1.0f || b > 5.0f) {
        std::cout << "b = " << b << '\n';
        found = true;
    }
    if (c < -1.0f || c > 5.0f) {
        std::cout << "c = " << c << '\n';
        found = true;
    }

    if (!found) {
        std::cout << "Немає чисел, що лежать поза заданим проміжком.\n";
    }
    }
}