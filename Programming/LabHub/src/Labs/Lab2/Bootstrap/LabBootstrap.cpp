#include "Labs/Lab2/Bootstrap/LabBootstrap.h"

#include "Labs/Lab2/Task1/Task.h"
#include "Labs/Lab2/Task2/Task.h"

namespace Labs::Lab2::Bootstrap
{
    Lab CreateLab()
    {
        Lab lab(2, "Functions and triangle validation");

        lab.AddTask(std::make_unique<Lab2::Task1::Task>());
        lab.AddTask(std::make_unique<Lab2::Task2::Task>());

        return lab;
    }
}
