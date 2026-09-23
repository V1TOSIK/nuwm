#pragma once

enum class Key
{
    Up,
    Down,
    Left,
    Right,
    Enter,
    Space,
    Escape,
    Unknown
};

class Keyboard
{
public:
    Key ReadKey() const;
};