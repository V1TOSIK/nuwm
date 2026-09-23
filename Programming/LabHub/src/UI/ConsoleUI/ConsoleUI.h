#pragma once

#include "UI/LabMenu/LabMenu.h"
#include "UI/TaskMenu/TaskMenu.h"

class ConsoleUI
{
public:
    ConsoleUI(
        UI::LabMenu& labMenu,
        UI::TaskMenu& taskMenu
    );

    void Run();

private:
    UI::LabMenu& _labMenu;
    UI::TaskMenu& _taskMenu;
};