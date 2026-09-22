#include "Labs/Registry/LabRegistry.h"
#include "ConsoleUI.h"

#include <iostream>

ConsoleUI::ConsoleUI(const Labs::LabRegistry& registry)
    : _registry(registry)
{
}

void ConsoleUI::Run()
{
    while (true)
    {
        ClearConsole();

        const auto& labs = _registry.GetLabs();

        std::cout << "Choose a lab:\n\n";

        for (const auto& lab : labs)
        {
            std::cout
                << lab.GetNumber()
                << ". "
                << lab.GetTitle()
                << '\n';
        }

        std::cout << "\nEnter number: ";

        short labNumber;
        std::cin >> labNumber;

        const Labs::Lab* lab = _registry.Find(labNumber);

        if (lab == nullptr)
        {
            std::cout << "Invalid lab number.\n";
            std::cin.ignore();
            std::cin.get();
            continue;
        }

        ShowLab(*lab);
    }
}

void ConsoleUI::ShowLab(const Labs::Lab& lab)
{
    while (true)
    {
        ClearConsole();

        std::cout
            << "Lab "
            << lab.GetNumber()
            << ": "
            << lab.GetTitle()
            << "\n\n";

        const auto& tasks = lab.GetTasks();

        for (const auto& task : tasks)
        {
            std::cout
                << task->Number()
                << ". "
                << task->Description()
                << '\n';
        }

        std::cout << "\nEnter task number: ";

        short taskNumber;
        std::cin >> taskNumber;

        ITask* selectedTask = nullptr;

        for (const auto& task : tasks)
        {
            if (task->Number() == taskNumber)
            {
                selectedTask = task.get();
                break;
            }
        }

        if (selectedTask == nullptr)
        {
            std::cout << "Invalid task number.\n";
            std::cin.ignore();
            std::cin.get();
            continue;
        }

        selectedTask->Execute();

        std::cout << "\nPress Enter to continue...";
        std::cin.ignore();
        std::cin.get();
    }
}

void ConsoleUI::ClearConsole()
{
    std::cout << "\033[2J\033[1;1H";
}