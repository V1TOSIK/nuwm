#include "Labs/Bootstrap/LabsBootstrap.h"
#include "Labs/Registry/LabRegistry.h"

#include "UI/Bootstrap/UIBootstrap.h"

int main()
{
    Labs::LabRegistry registry;

    Labs::Bootstrap::RegisterLabs(registry);

    UI::Bootstrap::UIBootstrap uiBootstrap(registry);

    uiBootstrap.GetUI().Run();

    return 0;
}