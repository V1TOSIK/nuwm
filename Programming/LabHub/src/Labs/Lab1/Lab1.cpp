#include "Labs/Lab1/Task1/Task1.h"
#include "Labs/Lab1/Task2/Task2.h"
#include "Labs/Lab1/Task3/Task3.h"
#include "Labs/Lab1/Task4/Task4.h"
#include "Labs/Lab1/Lab1.h"
#include <iostream>

namespace Labs
{
    void Lab1::Run() {
        int taskNumber;
        std::cout << "Choose a task (1 - 4): " << std::endl;
        std::cin >> taskNumber;
        switch (taskNumber)
        {
            case 1:{
                Lab1Tasks::Task1 task1;
                task1.Execute();
                break;
            }
            case 2:{
                Lab1Tasks::Task2 task2;
                task2.Execute();
                break;
            }
            case 3:{
                Lab1Tasks::Task3 task3;
                task3.Execute();
                break;
            }
            case 4:{
                Lab1Tasks::Task4 task4;
                task4.Execute();
                break;
            }
            default:{
                std::cout << "Invalid task number. Please choose either 1 or 2." << std::endl;
                break;
            }
        }
    }
}