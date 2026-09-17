#include "Labs/Lab3/Task3/Task3.h"
#include <iostream>
#include <cmath>

namespace Lab3Tasks
{
    void Task3::Execute() {

        float x, y;
        const float R = 3.0f;

        std::cout << "Введіть координату x точки M: ";
        std::cin >> x;
        std::cout << "Введіть координату y точки M: ";
        std::cin >> y;

        std::cout << "\n--- Вхідна інформація ---\n";
        std::cout << "Координати точки M: (" << x << "; " << y << ")\n";
        std::cout << "Радіус півкруга R = " << R << "\n\n";

        bool isInsideSemiCircle = (y >= 0.0f) && ((x * x + y * y) <= (R * R));

        std::cout << "--- Результат роботи ---\n";
        if (isInsideSemiCircle) {
            std::cout << "Точка M(" << x << "; " << y << ") НАЛЕЖИТЬ заданій фігурі.\n";
        } else {
            std::cout << "Точка M(" << x << "; " << y << ") НЕ НАЛЕЖИТЬ заданій фігурі.\n";
        }
    }
}