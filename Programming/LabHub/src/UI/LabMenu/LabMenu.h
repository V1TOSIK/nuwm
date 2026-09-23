#pragma once

#include "Labs/Lab/Lab.h"
#include "Labs/Registry/LabRegistry.h"

#include "UI/Keyboard/Keyboard.h"
#include "UI/Window/Window.h"

namespace UI
{
    class LabMenu
    {
    public:
        LabMenu(
            const Labs::LabRegistry& registry,
            Window& window,
            Keyboard& keyboard
        );

        const Labs::Lab* Select();

    private:
        void Show(short selectedIndex) const;

        const Labs::LabRegistry& _registry;
        Window& _window;
        Keyboard& _keyboard;
    };
}