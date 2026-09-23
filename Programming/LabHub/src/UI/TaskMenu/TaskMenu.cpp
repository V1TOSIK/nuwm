#include "UI/TaskMenu/TaskMenu.h"

#include <iostream>
#include <limits>
#include <string>

using std::cin;
using std::numeric_limits;
using std::streamsize;
using std::string;
using std::to_string;

namespace UI
{
    TaskMenu::TaskMenu(
        Window& window,
        Keyboard& keyboard
    )
        : _window(window),
          _keyboard(keyboard)
    {
    }

    ITask* TaskMenu::Select(const Labs::Lab& lab)
    {
        short selectedIndex = 0;

        while (true)
        {
            _window.Clear();

            Show(lab, selectedIndex);

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
                    < static_cast<short>(lab.GetTasks().size())
                )
                {
                    ++selectedIndex;
                }
            }
            else if (key == Key::Escape)
            {
                return nullptr;
            }
            else if (key == Key::Space || key == Key::Enter)
            {
                return lab.GetTasks()[selectedIndex].get();
            }
        }
    }

    void TaskMenu::Show(
        const Labs::Lab& lab,
        short selectedIndex
    ) const
    {
        _window.DrawHeader(
            "Лабораторна робота №"
            + to_string(lab.GetNumber())
        );

        _window.DrawLine("");

        _window.DrawLine(lab.GetTitle());

        _window.DrawLine("");

        _window.DrawSeparator();

        short position = 0;

        for (const auto& task : lab.GetTasks())
        {
            const string prefix =
                position == selectedIndex
                    ? "> "
                    : "  ";

            _window.DrawLine(
                prefix
                + to_string(position + 1)
                + ") Завдання "
                + to_string(lab.GetNumber())
                + "."
                + to_string(task->Number())
            );

            ++position;
        }

        _window.DrawLine("");

        _window.DrawSeparator();

        _window.DrawLine(
            "↑ ↓ — вибір     Space — відкрити     Esc — назад"
        );

        _window.DrawFooter();
    }

    void TaskMenu::ShowTask(
        const Labs::Lab& lab,
        ITask& task
    )
    {
        _window.Clear();

        _window.DrawHeader(
            "Лабораторна робота №"
            + to_string(lab.GetNumber())
            + " → Завдання "
            + to_string(lab.GetNumber())
            + "."
            + to_string(task.Number())
        );

        _window.DrawLine("");

        _window.DrawLine(task.Description());

        _window.DrawLine("");

        _window.DrawSeparator();

        task.Execute();

        cin.ignore(
            numeric_limits<streamsize>::max(),
            '\n'
        );

        _window.DrawSeparator();

        _window.DrawLine(
            "Натисніть Enter, щоб повернутися до списку завдань."
        );

        _window.DrawFooter();

        while (true)
        {
            const Key key = _keyboard.ReadKey();

            if (key == Key::Enter || key == Key::Space)
            {
                return;
            }
        }
    }
}