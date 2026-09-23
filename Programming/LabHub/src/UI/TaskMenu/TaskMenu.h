#pragma once

#include "Labs/Lab/Lab.h"

#include "UI/Keyboard/Keyboard.h"
#include "UI/Window/Window.h"

namespace UI
{
    class TaskMenu
    {
    public:
        TaskMenu(
            Window& window,
            Keyboard& keyboard
        );

        ITask* Select(const Labs::Lab& lab);

        void ShowTask(
            const Labs::Lab& lab,
            ITask& task
        );

    private:
        void Show(
            const Labs::Lab& lab,
            short selectedIndex
        ) const;

        Window& _window;
        Keyboard& _keyboard;
    };
}