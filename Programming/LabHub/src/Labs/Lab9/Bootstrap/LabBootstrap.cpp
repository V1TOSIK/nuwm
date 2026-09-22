#include "Labs/Lab9/Bootstrap/LabBootstrap.h"

#include "Labs/Lab9/Task1/Task.h"
#include "Labs/Lab9/Task2/Task.h"

namespace Labs::Lab9::Bootstrap
{
    Lab CreateLab()
    {
        Lab lab(9, "Lab 9");
        lab.AddTask(std::make_unique<Task1::Task>());
        lab.AddTask(std::make_unique<Task2::Task>());
        return lab;
    }
}
