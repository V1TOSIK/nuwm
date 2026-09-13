#include "Labs/Lab2/Task2/Task2.h"
#include <iostream>

namespace Lab2Tasks
{
    void Task2::Execute() {
        float a, b, c;
        std::cout << "Введіть сторони трикутника (A, B, C):\n";
        std::cout << "A = ";
        std::cin >> a;
        std::cout << "B = ";
        std::cin >> b;
        std::cout << "C = ";
        std::cin >> c;
        Calculate(a, b, c);
    }
    
    void Task2::Calculate(float a, float b, float c) {
        
        if (a > 0 && b > 0 && c > 0 && 
            (a + b > c) && (a + c > b) && (b + c > a)) {
            
            float perimeter = a + b + c;
            std::cout << "Периметр трикутника P = " << perimeter << '\n';
        } else {
            std::cout << "Помилка: трикутник із такими сторонами не може існувати.\n";
        }
    }
}