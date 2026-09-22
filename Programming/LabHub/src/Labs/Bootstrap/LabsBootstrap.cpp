#include "Labs/Bootstrap/LabsBootstrap.h"

#include "Labs/Registry/LabRegistry.h"
#include "Labs/Lab1/Bootstrap/LabBootstrap.h"
#include "Labs/Lab2/Bootstrap/LabBootstrap.h"

namespace Labs
{
    void RegisterLabs(LabRegistry& registry)
    {
        registry.Register(Lab1::CreateLab());
        registry.Register(Lab2::CreateLab());
    }
}