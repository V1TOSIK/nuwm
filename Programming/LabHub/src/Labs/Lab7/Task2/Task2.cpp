#include "Labs/Lab7/Task2/Task2.h"
#include <iostream>
#include <iomanip>
#include <cmath>

namespace Lab7Tasks
{
    void Task2::Execute() {
       const int SIZE = 7;
        double B[SIZE];

        std::cout << "Введіть " << SIZE << " елементів масиву B:\n";
        for (int i = 0; i < SIZE; ++i) {
            std::cin >> B[i];
        }

        std::cout << std::fixed << std::setprecision(1);
        std::cout << "\nЗаданий масив B:\n";
        for (int i = 0; i < SIZE; ++i) {
            std::cout << B[i] << (i == SIZE - 1 ? "" : "; ");
        }
        std::cout << "\n\nРезультати:\n";

        int neg_count = 0;

        for (int i = 0; i < SIZE; ++i) {
            if (B[i] < 0.0) {
                neg_count++;

                // Порядковий номер елемента в масиві — це i + 1
                if (neg_count == 2) {
                    std::cout << "2-й від'ємний елемент: значення = " << B[i] 
                            << ", порядковий номер = " << (i + 1) << "\n";
                } else if (neg_count == 4) {
                    std::cout << "4-й від'ємний елемент: значення = " << B[i] 
                            << ", порядковий номер = " << (i + 1) << "\n";
                }
            }
        }

        if (neg_count < 2) {
            std::cout << "У масиві менше ніж 2 від'ємних елементи.\n";
        } else if (neg_count < 4) {
            std::cout << "У масиві менше ніж 4 від'ємних елементи.\n";
        }
    }
}