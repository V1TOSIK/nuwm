#include "UI/LabMenu/LabMenu.h"

#include <string>

using std::string;
using std::to_string;

namespace UI
{
    LabMenu::LabMenu(
        const Labs::LabRegistry& registry,
        Window& window,
        Keyboard& keyboard
    )
        : _registry(registry),
          _window(window),
          _keyboard(keyboard)
    {
    }

    const Labs::Lab* LabMenu::Select()
    {
        short selectedIndex = 0;

        while (true)
        {
            _window.Clear();

            Show(selectedIndex);

            const Key key = _keyboard.ReadKey();

            if (key == Key::Up)
            {
                if (selectedIndex > 0)
                {
                    --selectedIndex;
                }
            }
            else if (key == Key::Down)
            {
                if (
                    selectedIndex + 1
                    < static_cast<short>(_registry.GetLabs().size())
                )
                {
                    ++selectedIndex;
                }
            }
            else if (key == Key::Space || key == Key::Enter)
            {
                const auto& labs = _registry.GetLabs();

                return &labs[selectedIndex];
            }
        }
    }

    void LabMenu::Show(short selectedIndex) const
    {
        _window.DrawHeader("LabHub");

        _window.DrawLine("");

        short position = 0;

        for (const auto& lab : _registry.GetLabs())
        {
            const string prefix =
                position == selectedIndex
                    ? "> "
                    : "  ";

            _window.DrawLine(
                prefix
                + to_string(position + 1)
                + ". Лабораторна робота №"
                + to_string(lab.GetNumber())
            );

            ++position;
        }

        _window.DrawLine("");

        _window.DrawSeparator();

        _window.DrawLine(
            "↑ ↓ — вибір     Space — відкрити"
        );

        _window.DrawFooter();
    }
}