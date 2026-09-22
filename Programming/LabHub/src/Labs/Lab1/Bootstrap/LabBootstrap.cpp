namespace Labs::Lab1
{
    Lab CreateLab()
    {
        Lab lab(1, "Arrays");

        lab.AddTask(std::make_unique<Task1::Task>());
        lab.AddTask(std::make_unique<Task2::Task>());
        lab.AddTask(std::make_unique<Task3::Task>());
        lab.AddTask(std::make_unique<Task4::Task>());

        return lab;
    }
}