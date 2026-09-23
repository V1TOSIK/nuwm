#include "Labs/Lab6/Bootstrap/LabBootstrap.h"

#include "Labs/Lab6/Task1/Task.h"
#include "Labs/Lab6/Task2/Task.h"
#include "Labs/Lab6/Task3/Task.h"

using std::make_unique;

namespace Labs::Lab6::Bootstrap
{
    Lab CreateLab()
    {
        Lab lab(6, "Програмування ітераційних циклічних обчислювальних процесів");
        lab.AddTask(make_unique<Task1::Task>());
        lab.AddTask(make_unique<Task2::Task>());
        lab.AddTask(make_unique<Task3::Task>());
        return lab;
    }
}
