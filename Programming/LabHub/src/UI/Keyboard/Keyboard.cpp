#include "UI/Keyboard/Keyboard.h"

#include <termios.h>
#include <unistd.h>

namespace
{
    termios EnableRawMode()
    {
        termios original{};

        tcgetattr(STDIN_FILENO, &original);

        termios raw = original;

        raw.c_lflag &= ~(ICANON | ECHO);

        // Read() повертається одразу після першого символу.
        raw.c_cc[VMIN] = 1;
        raw.c_cc[VTIME] = 0;

        tcsetattr(
            STDIN_FILENO,
            TCSANOW,
            &raw
        );

        return original;
    }

    void RestoreTerminal(const termios& original)
    {
        tcsetattr(
            STDIN_FILENO,
            TCSANOW,
            &original
        );
    }

    bool ReadCharacter(char& character)
    {
        return read(
            STDIN_FILENO,
            &character,
            1
        ) == 1;
    }
}

Key Keyboard::ReadKey() const
{
    const termios original = EnableRawMode();

    char first;

    if (!ReadCharacter(first))
    {
        RestoreTerminal(original);

        return Key::Unknown;
    }

    if (first == ' ')
    {
        RestoreTerminal(original);

        return Key::Space;
    }

    if (first == '\n' || first == '\r')
    {
        RestoreTerminal(original);

        return Key::Enter;
    }

    if (first != '\033')
    {
        RestoreTerminal(original);

        return Key::Unknown;
    }

    /*
     * ESC може бути:
     *
     * ESC          -> Escape
     *
     * ESC [ A      -> Up
     * ESC [ B      -> Down
     * ESC [ C      -> Right
     * ESC [ D      -> Left
     */

    termios sequenceMode{};

    tcgetattr(STDIN_FILENO, &sequenceMode);

    sequenceMode.c_cc[VMIN] = 0;
    sequenceMode.c_cc[VTIME] = 1;

    tcsetattr(
        STDIN_FILENO,
        TCSANOW,
        &sequenceMode
    );

    char second;

    if (!ReadCharacter(second))
    {
        RestoreTerminal(original);

        return Key::Escape;
    }

    if (second != '[')
    {
        RestoreTerminal(original);

        return Key::Escape;
    }

    char third;

    if (!ReadCharacter(third))
    {
        RestoreTerminal(original);

        return Key::Escape;
    }

    Key key = Key::Unknown;

    switch (third)
    {
        case 'A':
            key = Key::Up;
            break;

        case 'B':
            key = Key::Down;
            break;

        case 'C':
            key = Key::Right;
            break;

        case 'D':
            key = Key::Left;
            break;

        default:
            key = Key::Unknown;
            break;
    }

    RestoreTerminal(original);

    return key;
}