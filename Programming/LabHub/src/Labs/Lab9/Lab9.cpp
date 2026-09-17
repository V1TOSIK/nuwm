#include "Labs/Lab9/Task1/Task1.h"
#include "Labs/Lab9/Task2/Task2.h"
#include "Labs/Lab9/Lab9.h"
#include <iostream>

namespace Labs
{
    void Lab9::Run() {
        int taskNumber;
        std::cout << "Choose a task (1 or 2): " << std::endl;
        std::cin >> taskNumber;
        switch (taskNumber)
        {
            case 1:{
                Lab9Tasks::Task1 task1;
                task1.Execute();
                break;
            }
            case 2:{
                Lab9Tasks::Task2 task2;
                task2.Execute();
                break;
            }
            default:{
                std::cout << "Invalid task number. Please choose either 1 or 2." << std::endl;
                break;
            }
        }
    }
}