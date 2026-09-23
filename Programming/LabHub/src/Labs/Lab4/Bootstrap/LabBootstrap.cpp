#include "Labs/Lab4/Bootstrap/LabBootstrap.h"
#include "Labs/Lab4/Task1/Task.h"
#include "Labs/Lab4/Task2/Task.h"
#include "Labs/Lab4/Task3/Task.h"

using std::make_unique;

namespace Labs::Lab4::Bootstrap
{
    Lab CreateLab()
    {
        Lab lab(4, "Циклічні алгоритми та програми");
        lab.AddTask(make_unique<Task1::Task>());
        lab.AddTask(make_unique<Task2::Task>());
        lab.AddTask(make_unique<Task3::Task>());
        return lab;
    }
}
