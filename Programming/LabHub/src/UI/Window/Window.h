#pragma once

#include <string>
#include <vector>

class Window
{
public:
    void DrawHeader(const std::string& title) const;
    void DrawLine(const std::string& text) const;
    void DrawSeparator() const;
    void DrawFooter() const;

    void Clear() const;

private:
    int GetTerminalWidth() const;

    int GetTextWidth(const std::string& text) const;

    std::vector<std::string> WrapText(
        const std::string& text,
        int maxWidth
    ) const;
};