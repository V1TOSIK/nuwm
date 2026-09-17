#include "Labs/Lab3/Task4/Task4.h"
#include <iostream>
#include <cmath>

namespace Lab3Tasks
{
    void Task4::Execute() {

        float a, b, c;

        // Введення вхідних даних за допомогою стандартних процедур
        std::cout << "Введіть прибуток першого підприємства (a): ";
        std::cin >> a;
        std::cout << "Введіть прибуток другого підприємства (b): ";
        std::cin >> b;
        std::cout << "Введіть прибуток третього підприємства (c): ";
        std::cin >> c;

        // 1. Виведення значення вхідної інформації
        std::cout << "\n--- Вхідна інформація ---\n";
        std::cout << "Прибуток підприємств:\n";
        std::cout << "a = " << a << " грн. од.\n";
        std::cout << "b = " << b << " грн. од.\n";
        std::cout << "c = " << c << " грн. од.\n\n";

        // 2. Обчислення результатів
        float average = (a + b + c) / 3.0f;
        
        // Знаходимо найменший прибуток
        float min_profit = a;
        if (b < min_profit) min_profit = b;
        if (c < min_profit) min_profit = c;

        // Визначення різниці між середнім та найменшим прибутком
        float difference = std::abs(average - min_profit);

        // 3. Виведення результатів обчислень
        std::cout << "--- Результати обчислень ---\n";
        std::cout << "Середній прибуток підприємств: " << average << " грн. од.\n";
        std::cout << "Найменший прибуток: " << min_profit << " грн. од.\n";
        std::cout << "Середній прибуток відрізняється від найменшого на: " << difference << " грн. од.\n";
    }
}