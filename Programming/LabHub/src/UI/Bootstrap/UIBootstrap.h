#pragma once

#include "Labs/Registry/LabRegistry.h"

#include "UI/ConsoleUI/ConsoleUI.h"
#include "UI/Keyboard/Keyboard.h"
#include "UI/LabMenu/LabMenu.h"
#include "UI/TaskMenu/TaskMenu.h"
#include "UI/Window/Window.h"

namespace UI::Bootstrap
{
    class UIBootstrap
    {
    public:
        explicit UIBootstrap(
            const Labs::LabRegistry& registry
        );

        ConsoleUI& GetUI();

    private:
        Window _window;
        Keyboard _keyboard;
        LabMenu _labMenu;
        TaskMenu _taskMenu;
        ConsoleUI _consoleUI;
    };
}