#include "UI/ConsoleUI.h"
#include "Labs/Lab1/Lab1.h"
#include "Labs/Lab2/Lab2.h"
#include "Labs/Lab3/Lab3.h"
#include "Labs/Lab4/Lab4.h"
#include "Labs/Lab5/Lab5.h"
#include "Labs/Lab6/Lab6.h"
#include "Labs/Lab7/Lab7.h"
#include <iostream>

void ConsoleUI::Run() {
    int labNumber;
    while (true) {
        ClearConsole();
        std::cout << "Choose a lab (1, 2, 3, 4, 5, 6 or 7): " << std::endl;
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
            case 6:{
                Labs::Lab6 lab6;
                lab6.Run();
                break;
            }
            case 7:{
                Labs::Lab7 lab7;
                lab7.Run();
                break;
            }
            default:{
                std::cout << "Invalid lab number. Please choose either 1, 2, 3, 4, 5, 6 or 7." << std::endl;
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