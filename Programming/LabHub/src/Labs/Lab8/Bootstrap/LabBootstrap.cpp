#include "Labs/Lab8/Bootstrap/LabBootstrap.h"

#include "Labs/Lab8/Task1/Task.h"
#include "Labs/Lab8/Task2/Task.h"
#include "Labs/Lab8/Task3/Task.h"

namespace Labs::Lab8::Bootstrap
{
    Lab CreateLab()
    {
        Lab lab(8, "Lab 8");
        lab.AddTask(std::make_unique<Task1::Task>());
        lab.AddTask(std::make_unique<Task2::Task>());
        lab.AddTask(std::make_unique<Task3::Task>());
        return lab;
    }
}
