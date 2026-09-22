#include "Labs/Lab6/Bootstrap/LabBootstrap.h"

#include "Labs/Lab6/Task1/Task.h"
#include "Labs/Lab6/Task2/Task.h"
#include "Labs/Lab6/Task3/Task.h"

namespace Labs::Lab6::Bootstrap
{
    Lab CreateLab()
    {
        Lab lab(6, "Lab 6");
        lab.AddTask(std::make_unique<Task1::Task>());
        lab.AddTask(std::make_unique<Task2::Task>());
        lab.AddTask(std::make_unique<Task3::Task>());
        return lab;
    }
}
