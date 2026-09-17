#include "Labs/Lab7/Task1/Task1.h"
#include "Labs/Lab7/Task2/Task2.h"
#include "Labs/Lab7/Task3/Task3.h"
#include "Labs/Lab7/Task4/Task4.h"
#include "Labs/Lab7/Lab7.h"
#include <iostream>

namespace Labs
{
    void Lab7::Run() {
        int taskNumber;
        std::cout << "Choose a task (1, 2, 3, or 4): " << std::endl;
        std::cin >> taskNumber;
        switch (taskNumber)
        {
            case 1:{
                Lab7Tasks::Task1 task1;
                task1.Execute();
                break;
            }
            case 2:{
                Lab7Tasks::Task2 task2;
                task2.Execute();
                break;
            }
            case 3:{
                Lab7Tasks::Task3 task3;
                task3.Execute();
                break;
            }
            case 4:{
                Lab7Tasks::Task4 task4;
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