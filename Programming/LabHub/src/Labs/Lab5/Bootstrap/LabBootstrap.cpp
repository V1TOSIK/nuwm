#include "Labs/Lab5/Bootstrap/LabBootstrap.h"

#include "Labs/Lab5/Task1/Task.h"
#include "Labs/Lab5/Task2/Task.h"
#include "Labs/Lab5/Task3/Task.h"

using std::make_unique;

namespace Labs::Lab5::Bootstrap
{
    Lab CreateLab()
    {
        Lab lab(5, "Типові прийоми програмування");
        lab.AddTask(make_unique<Task1::Task>());
        lab.AddTask(make_unique<Task2::Task>());
        lab.AddTask(make_unique<Task3::Task>());
        return lab;
    }
}
