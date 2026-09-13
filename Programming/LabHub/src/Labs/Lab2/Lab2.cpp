#include "Labs/Lab2/Task1/Task1.h"
#include "Labs/Lab2/Task2/Task2.h"
#include "Labs/Lab2/Lab2.h"
#include <iostream>

namespace Labs
{
    void Lab2::Run() {
        int taskNumber;
        std::cout << "Choose a task (1 or 2): " << std::endl;
        std::cin >> taskNumber;
        switch (taskNumber)
        {
            case 1:{
                Lab2Tasks::Task1 task1;
                task1.Execute();
                break;
            }
            case 2:{
                Lab2Tasks::Task2 task2;
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