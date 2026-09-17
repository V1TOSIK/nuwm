#include "Labs/Lab5/Task1/Task1.h"
#include "Labs/Lab5/Task2/Task2.h"
#include "Labs/Lab5/Task3/Task3.h"
#include "Labs/Lab5/Lab5.h"
#include <iostream>

namespace Labs
{
    void Lab5::Run() {
        int taskNumber;
        std::cout << "Choose a task (1, 2 or 3): " << std::endl;
        std::cin >> taskNumber;
        switch (taskNumber)
        {
            case 1:{
                Lab5Tasks::Task1 task1;
                task1.Execute();
                break;
            }
            case 2:{
                Lab5Tasks::Task2 task2;
                task2.Execute();
                break;
            }
            case 3:{
                Lab5Tasks::Task3 task3;
                task3.Execute();
                break;
            }
            default:{
                std::cout << "Invalid task number. Please choose either 1, 2, or 3." << std::endl;
                break;
            }
        }
    }
}