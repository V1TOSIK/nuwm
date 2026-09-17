#include "Labs/Lab7/Task3/Task3.h"
#include <iostream>
#include <iomanip>
#include <cmath>

namespace Lab7Tasks
{
    void Task3::Execute() {
        int n;
        std::cout << "Введіть розмірність масиву n (n <= 7): ";
        std::cin >> n;

        if (n < 1 || n > 7) {
            std::cout << "Помилка: n має бути в межах від 1 до 7.\n";
            return;
        }

        double A[7];
        std::cout << "Введіть " << n << " елементів масиву (обов'язково хоча б один 0):\n";
        for (int i = 0; i < n; ++i) {
            std::cin >> A[i];
        }

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nВведений масив A:\n";
        for (int i = 0; i < n; ++i) {
            std::cout << A[i] << (i == n - 1 ? "" : "; ");
        }
        std::cout << "\n";

        int positive_count = 0;
        int negative_count = 0;
        bool zero_found = false;

        for (int i = 0; i < n; ++i) {
            if (A[i] == 0.0) {
                zero_found = true;
                break; // Зупиняємо підрахунок на першому нулі
            }

            if (A[i] > 0.0) {
                positive_count++;
            } else if (A[i] < 0.0) {
                negative_count++;
            }
        }

        std::cout << "\nРезультати:\n";
        if (zero_found) {
            std::cout << "Кількість додатних елементів до першого нуля: " << positive_count << "\n";
            std::cout << "Кількість від'ємних елементів до першого нуля: " << negative_count << "\n";
        } else {
            std::cout << "Увага: у масиві не знайдено жодного нуля (порушено умову задачі).\n";
        }
    }
}