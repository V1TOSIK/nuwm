#include "Labs/Lab7/Bootstrap/LabBootstrap.h"

#include "Labs/Lab7/Task1/Task.h"
#include "Labs/Lab7/Task2/Task.h"
#include "Labs/Lab7/Task3/Task.h"
#include "Labs/Lab7/Task4/Task.h"

namespace Labs::Lab7::Bootstrap
{
    Lab CreateLab()
    {
        Lab lab(7, "Lab 7");
        lab.AddTask(std::make_unique<Task1::Task>());
        lab.AddTask(std::make_unique<Task2::Task>());
        lab.AddTask(std::make_unique<Task3::Task>());
        lab.AddTask(std::make_unique<Task4::Task>());
        return lab;
    }
}
