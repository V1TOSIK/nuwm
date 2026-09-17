#include "Labs/Lab4/Task1/Task1.h"
#include <iostream>
#include <cmath>
#include <iomanip>

namespace Lab4Tasks
{

    float Task1::CalculateFunction(float x) {
        if (std::abs(x + 2.0f) < 1e-6f) {
            return NAN;
        }
        return (x + std::cos(2.0f * x)) / (x + 2.0f);
    }
    
    void Task1::PrintRow(int index, float x, float y) {
        std::cout << "| " << std::setw(4) << index 
                  << " | " << std::setw(10) << std::fixed << std::setprecision(4) << x 
                  << " | ";
        if (std::isnan(y)) {
            std::cout << std::setw(12) << "Невзнач. (x=-2)" << " |\n";
        } else {
            std::cout << std::setw(12) << std::fixed << std::setprecision(4) << y << " |\n";
        }
    }
    
    void Task1::Execute() {
        float x_start, x_end, dx;
        int n;
    
        // Стандартне введення всіх обов'язкових параметрів
        std::cout << "Введіть початкове значення x (x_start): ";
        std::cin >> x_start;
        std::cout << "Введіть кінцеве значення x (x_end): ";
        std::cin >> x_end;
        std::cout << "Введіть крок зміни аргументу (dx): ";
        std::cin >> dx;
        std::cout << "Введіть кількість обчислюваних значень (n): ";
        std::cin >> n;
    
        // Режим 1: табулювання на проміжку [x_start; x_end]
        std::cout << "\n1. Табулювання на проміжку [" << x_start << "; " << x_end << "] з кроком " << dx << ":\n";
        std::cout << "+------+------------+--------------+\n";
        std::cout << "|  №   |     x      |      y       |\n";
        std::cout << "+------+------------+--------------+\n";
    
        int index = 1;
        for (float x = x_start; x <= x_end + 1e-5f; x += dx) {
            Task1::PrintRow(index++, x, Task1::CalculateFunction(x));
        }
        std::cout << "+------+------------+--------------+\n";
    
        // Режим 2: табулювання починаючи з точки x_start для n значень
        std::cout << "\n2. Табулювання для " << n << " точок починаючи з x = " << x_start << ":\n";
        std::cout << "+------+------------+--------------+\n";
        std::cout << "|  №   |     x      |      y       |\n";
        std::cout << "+------+------------+--------------+\n";
    
        float current_x = x_start;
        for (int i = 1; i <= n; ++i) {
            Task1::PrintRow(i, current_x, Task1::CalculateFunction(current_x));
            current_x += dx;
        }
        std::cout << "+------+------------+--------------+\n";
    }
}