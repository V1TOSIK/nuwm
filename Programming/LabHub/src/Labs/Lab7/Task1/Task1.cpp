#include "Labs/Lab7/Task1/Task1.h"
#include <iostream>
#include <iomanip>
#include <cmath>

namespace Lab7Tasks
{
    void Task1::Execute() {
        const int SIZE = 12;
        double X[SIZE];

        std::cout << "Введіть " << SIZE << " елементів масиву X:\n";
        for (int i = 0; i < SIZE; ++i) {
            std::cin >> X[i];
        }

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nЗаданий масив X:\n";
        for (int i = 0; i < SIZE; ++i) {
            std::cout << X[i] << (i == SIZE - 1 ? "" : "; ");
        }
        std::cout << "\n";

        double sum = 0.0;
        int count = 0;

        // Парні місця (2-ге, 4-те, 6-те...) відповідають індексам 1, 3, 5, 7, 9, 11
        for (int i = 1; i < SIZE; i += 2) {
            if (X[i] < 0.0) {
                sum += X[i];
                count++;
            }
        }

        std::cout << "\nРезультати:\n";
        if (count > 0) {
            std::cout << "Сума від'ємних елементів на парних місцях: " << sum << "\n";
            std::cout << "Кількість знайдених елементів: " << count << "\n";
        } else {
            std::cout << "Від'ємних елементів на парних місцях не знайдено.\n";
        }
    }
}