#include "Labs/Lab1/Bootstrap/LabBootstrap.h"

#include "Labs/Lab1/Task1/Task.h"
#include "Labs/Lab1/Task2/Task.h"
#include "Labs/Lab1/Task3/Task.h"
#include "Labs/Lab1/Task4/Task.h"

namespace Labs::Lab1::Bootstrap
{
    Lab CreateLab()
    {
        Lab lab(1, "coming soon");

        lab.AddTask(std::make_unique<Lab1::Task1::Task>());
        lab.AddTask(std::make_unique<Lab1::Task2::Task>());
        lab.AddTask(std::make_unique<Lab1::Task3::Task>());
        lab.AddTask(std::make_unique<Lab1::Task4::Task>());

        return lab;
    }
}