#include "UI/ConsoleUI.h"
#include "Labs/Registry/LabRegistry.h"
#include "Labs/Bootstrap/LabsBootstrap.h"

int main()
{
    Labs::LabRegistry registry;

    Labs::Bootstrap::RegisterLabs(registry);

    ConsoleUI consoleUI(registry);
    consoleUI.Run();
}