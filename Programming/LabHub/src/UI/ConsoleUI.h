#pragma once

#include "Labs/Registry/LabRegistry.h"

class ConsoleUI
{
public:
    explicit ConsoleUI(const Labs::LabRegistry& registry);

    void Run();

private:
    void ShowLab(const Labs::Lab& lab);
    void ClearConsole();

    const Labs::LabRegistry& _registry;
};