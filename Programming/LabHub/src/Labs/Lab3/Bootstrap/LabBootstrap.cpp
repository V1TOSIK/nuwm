#include "Labs/Lab3/Bootstrap/LabBootstrap.h"

#include "Labs/Lab3/Task1/Task.h"
#include "Labs/Lab3/Task2/Task.h"
#include "Labs/Lab3/Task3/Task.h"
#include "Labs/Lab3/Task4/Task.h"

namespace Labs::Lab3::Bootstrap
{
    Lab CreateLab()
    {
        Lab lab(3, "Lab 3");
        lab.AddTask(std::make_unique<Lab3::Task1::Task>());
        lab.AddTask(std::make_unique<Lab3::Task2::Task>());
        lab.AddTask(std::make_unique<Lab3::Task3::Task>());
        lab.AddTask(std::make_unique<Lab3::Task4::Task>());
        return lab;
    }
}
