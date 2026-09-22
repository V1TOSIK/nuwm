#include "Labs/Lab4/Bootstrap/LabBootstrap.h"

#include "Labs/Lab4/Task1/Task.h"
#include "Labs/Lab4/Task2/Task.h"
#include "Labs/Lab4/Task3/Task.h"

namespace Labs::Lab4::Bootstrap
{
    Lab CreateLab()
    {
        Lab lab(4, "Lab 4");
        lab.AddTask(std::make_unique<Task1::Task>());
        lab.AddTask(std::make_unique<Task2::Task>());
        lab.AddTask(std::make_unique<Task3::Task>());
        return lab;
    }
}
