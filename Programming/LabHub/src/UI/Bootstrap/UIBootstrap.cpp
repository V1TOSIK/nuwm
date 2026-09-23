#include "UI/Bootstrap/UIBootstrap.h"

namespace UI::Bootstrap
{
    UIBootstrap::UIBootstrap(
        const Labs::LabRegistry& registry
    )
        : _window(),
          _keyboard(),
          _labMenu(registry, _window, _keyboard),
          _taskMenu(_window, _keyboard),
          _consoleUI(_labMenu, _taskMenu)
    {
    }

    ConsoleUI& UIBootstrap::GetUI()
    {
        return _consoleUI;
    }
}