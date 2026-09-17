#include "Labs/Lab6/Task2/Task2.h"
#include <iomanip>
#include <iostream>
#include <cmath>

namespace Lab6Tasks
{
    void Task2::Execute() {
        double x0;
        double eps;

        std::cout << "Введіть початкове наближення x0 (за варіантом 1): ";
        std::cin >> x0;
        std::cout << "Введіть точність eps (за варіантом 0.001): ";
        std::cin >> eps;

        double x_curr = x0;
        double x_next = 0.0;
        int iterations = 0;
        const int max_iterations = 50;
        bool diverged = false;

        std::cout << std::fixed << std::setprecision(6);
        std::cout << "\nІтераційний процес за формулою з методички:\n";

        do {
            x_next = Task2::Phi(x_curr);
            iterations++;

            std::cout << "Крок " << iterations << ": x = " << x_next << "\n";

            if (std::isnan(x_next) || std::isinf(x_next) || std::abs(x_next) > 1e6 || iterations >= max_iterations) {
                diverged = true;
                break;
            }

            if (std::abs(x_next - x_curr) < eps) {
                break;
            }

            x_curr = x_next;
        } while (true);

        if (diverged) {
            std::cout << "\nУвага: пряма формула розбігається (|phi'(x)| > 1).\n";
            std::cout << "Обчислення за перетвореною еквівалентною формулою x = lg(100 - 2x):\n";

            x_curr = x0;
            iterations = 0;

            do {
                x_next = Task2::Phi_convergent(x_curr);
                iterations++;
                double diff = std::abs(x_next - x_curr);
                x_curr = x_next;

                if (diff < eps) break;
            } while (iterations < max_iterations);

            std::cout << "Обчислене значення кореня: " << x_next << "\n";
            std::cout << "Кількість ітерацій: " << iterations << "\n";
        } else {
            std::cout << "\nОбчислене значення кореня: " << x_next << "\n";
            std::cout << "Кількість ітерацій: " << iterations << "\n";
        }
    }

    double Task2::Phi(double x) {
        return 0.5 * (100.0 - std::pow(10.0, x));
    }

    // Альтернативна еквівалентна функція (зі збіжністю): x = lg(100 - 2x)
    double Task2::Phi_convergent(double x) {
        return std::log10(100.0 - 2.0 * x);
    }
}