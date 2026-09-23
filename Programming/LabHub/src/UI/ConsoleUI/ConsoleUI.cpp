#include "UI/ConsoleUI/ConsoleUI.h"

ConsoleUI::ConsoleUI(
    UI::LabMenu& labMenu,
    UI::TaskMenu& taskMenu
)
    : _labMenu(labMenu),
      _taskMenu(taskMenu)
{
}

void ConsoleUI::Run()
{
    while (true)
    {
        const Labs::Lab* lab = _labMenu.Select();

        while (lab != nullptr)
        {
            ITask* task = _taskMenu.Select(*lab);

            if (task == nullptr)
            {
                break;
            }

            _taskMenu.ShowTask(*lab, *task);
        }
    }
}