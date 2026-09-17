#include "UI/ConsoleUI.h"
#include "Labs/Lab1/Lab1.h"
#include "Labs/Lab2/Lab2.h"
#include "Labs/Lab3/Lab3.h"
#include "Labs/Lab4/Lab4.h"
#include "Labs/Lab5/Lab5.h"
#include <iostream>

void ConsoleUI::Run() {
    int labNumber;
    while (true) {
        ClearConsole();
        std::cout << "Choose a lab (1, 2, 3, 4 or 5): " << std::endl;
        std::cin >> labNumber;
        switch (labNumber)
        {
            case 1:{
                Labs::Lab1 lab1;
                lab1.Run();
                break;
            }
            case 2:{
                Labs::Lab2 lab2;
                lab2.Run();
                break;
            }
            case 3:{
                Labs::Lab3 lab3;
                lab3.Run();
                break;
            }
            case 4:{
                Labs::Lab4 lab4;
                lab4.Run();
                break;
            }
            case 5:{
                Labs::Lab5 lab5;
                lab5.Run();
                break;
            }
            default:{
                std::cout << "Invalid lab number. Please choose either 1, 2, 3, 4 or 5." << std::endl;
                labNumber = 0;
                break;
            }
        }
        std::cin.ignore();
        std::cout << "Press Enter to continue..." << std::endl;
        std::cin.get();
    }
}

void ConsoleUI::ClearConsole() {
    std::cout << "\033[2J\033[1;1H";
}