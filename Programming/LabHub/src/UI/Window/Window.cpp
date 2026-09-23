#include "UI/Window/Window.h"

#include <iostream>
#include <sys/ioctl.h>
#include <unistd.h>

using std::cout;
using std::string;
using std::vector;

void Window::DrawHeader(const string& title) const
{
    const int width = GetTerminalWidth();

    cout << "┌";

    for (int i = 0; i < width - 2; ++i)
    {
        cout << "─";
    }

    cout << "┐\n";

    DrawLine(title);

    DrawSeparator();
}

void Window::DrawLine(const string& text) const
{
    const int width = GetTerminalWidth();
    const int contentWidth = width - 6;

    const vector<string> lines =
        WrapText(text, contentWidth);

    for (const auto& line : lines)
    {
        const int textWidth = GetTextWidth(line);
        const int padding = contentWidth - textWidth;

        cout << "│  "
             << line;

        for (int i = 0; i < padding; ++i)
        {
            cout << ' ';
        }

        cout << "  │\n";
    }
}

void Window::DrawSeparator() const
{
    const int width = GetTerminalWidth();

    cout << "├";

    for (int i = 0; i < width - 2; ++i)
    {
        cout << "─";
    }

    cout << "┤\n";
}

void Window::DrawFooter() const
{
    const int width = GetTerminalWidth();

    cout << "└";

    for (int i = 0; i < width - 2; ++i)
    {
        cout << "─";
    }

    cout << "┘\n";
}

void Window::Clear() const
{
    cout << "\033[2J\033[1;1H";
}

int Window::GetTerminalWidth() const
{
    winsize size{};

    ioctl(
        STDOUT_FILENO,
        TIOCGWINSZ,
        &size
    );

    if (size.ws_col < 10)
    {
        return 80;
    }

    return size.ws_col;
}

int Window::GetTextWidth(const string& text) const
{
    int width = 0;

    for (std::size_t i = 0; i < text.length();)
    {
        const unsigned char byte =
            static_cast<unsigned char>(text[i]);

        if ((byte & 0x80) == 0)
        {
            ++i;
            ++width;
        }
        else if ((byte & 0xE0) == 0xC0)
        {
            i += 2;
            ++width;
        }
        else if ((byte & 0xF0) == 0xE0)
        {
            i += 3;
            ++width;
        }
        else if ((byte & 0xF8) == 0xF0)
        {
            i += 4;
            ++width;
        }
        else
        {
            ++i;
        }
    }

    return width;
}

vector<string> Window::WrapText(
    const string& text,
    int maxWidth
) const
{
    vector<string> lines;

    if (text.empty())
    {
        lines.push_back("");
        return lines;
    }

    string currentLine;
    int currentWidth = 0;

    for (std::size_t i = 0; i < text.length();)
    {
        const std::size_t start = i;

        const unsigned char byte =
            static_cast<unsigned char>(text[i]);

        std::size_t charSize = 1;

        if ((byte & 0x80) == 0)
        {
            charSize = 1;
        }
        else if ((byte & 0xE0) == 0xC0)
        {
            charSize = 2;
        }
        else if ((byte & 0xF0) == 0xE0)
        {
            charSize = 3;
        }
        else if ((byte & 0xF8) == 0xF0)
        {
            charSize = 4;
        }

        const string character =
            text.substr(start, charSize);

        const int characterWidth =
            GetTextWidth(character);

        if (
            currentWidth + characterWidth > maxWidth
            && !currentLine.empty()
        )
        {
            lines.push_back(currentLine);

            currentLine.clear();
            currentWidth = 0;
        }

        currentLine += character;
        currentWidth += characterWidth;

        i += charSize;
    }

    if (!currentLine.empty())
    {
        lines.push_back(currentLine);
    }

    return lines;
}