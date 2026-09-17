#include "Labs/Lab8/Task1/Task1.h"
#include "Labs/Lab8/Task2/Task2.h"
#include "Labs/Lab8/Task3/Task3.h"
#include "Labs/Lab8/Lab8.h"
#include <iostream>

namespace Labs
{
    void Lab8::Run() {
        int taskNumber;
        std::cout << "Choose a task (1, 2, or 3): " << std::endl;
        std::cin >> taskNumber;
        switch (taskNumber)
        {
            case 1:{
                Lab8Tasks::Task1 task1;
                task1.Execute();
                break;
            }
            case 2:{
                Lab8Tasks::Task2 task2;
                task2.Execute();
                break;
            }
            case 3:{
                Lab8Tasks::Task3 task3;
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