#include "Labs/Lab7/Bootstrap/LabBootstrap.h"

#include "Labs/Lab7/Task1/Task.h"
#include "Labs/Lab7/Task2/Task.h"
#include "Labs/Lab7/Task3/Task.h"
#include "Labs/Lab7/Task4/Task.h"

using std::make_unique;

namespace Labs::Lab7::Bootstrap
{
    Lab CreateLab()
    {
        Lab lab(7, "Одновимірні масиви");
        lab.AddTask(make_unique<Task1::Task>());
        lab.AddTask(make_unique<Task2::Task>());
        lab.AddTask(make_unique<Task3::Task>());
        lab.AddTask(make_unique<Task4::Task>());
        return lab;
    }
}
