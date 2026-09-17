#include "Labs/Lab3/Task1/Task1.h"
#include "Labs/Lab3/Task2/Task2.h"
#include "Labs/Lab3/Task3/Task3.h"
#include "Labs/Lab3/Task4/Task4.h"
#include "Labs/Lab3/Lab3.h"
#include <iostream>

namespace Labs
{
    void Lab3::Run() {
        int taskNumber;
        std::cout << "Choose a task (1, 2, 3, or 4): " << std::endl;
        std::cin >> taskNumber;
        switch (taskNumber)
        {
            case 1:{
                Lab3Tasks::Task1 task1;
                task1.Execute();
                break;
            }
            case 2:{
                Lab3Tasks::Task2 task2;
                task2.Execute();
                break;
            }
            case 3:{
                Lab3Tasks::Task3 task3;
                task3.Execute();
                break;
            }
            case 4:{
                Lab3Tasks::Task4 task4;
                task4.Execute();
                break;
            }
            default:{
                std::cout << "Invalid task number. Please choose either 1, 2, 3, or 4." << std::endl;
                break;
            }
        }
    }
}