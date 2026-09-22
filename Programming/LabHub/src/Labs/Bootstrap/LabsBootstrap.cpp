#include "Labs/Bootstrap/LabsBootstrap.h"

#include "Labs/Registry/LabRegistry.h"
#include "Labs/Lab1/Bootstrap/LabBootstrap.h"
#include "Labs/Lab2/Bootstrap/LabBootstrap.h"
#include "Labs/Lab3/Bootstrap/LabBootstrap.h"
#include "Labs/Lab4/Bootstrap/LabBootstrap.h"
#include "Labs/Lab5/Bootstrap/LabBootstrap.h"
#include "Labs/Lab6/Bootstrap/LabBootstrap.h"
#include "Labs/Lab7/Bootstrap/LabBootstrap.h"
#include "Labs/Lab8/Bootstrap/LabBootstrap.h"
#include "Labs/Lab9/Bootstrap/LabBootstrap.h"

namespace Labs::Bootstrap
{
    void RegisterLabs(LabRegistry& registry)
    {
        registry.Register(Lab1::Bootstrap::CreateLab());
        registry.Register(Lab2::Bootstrap::CreateLab());
        registry.Register(Lab3::Bootstrap::CreateLab());
        registry.Register(Lab4::Bootstrap::CreateLab());
        registry.Register(Lab5::Bootstrap::CreateLab());
        registry.Register(Lab6::Bootstrap::CreateLab());
        registry.Register(Lab7::Bootstrap::CreateLab());
        registry.Register(Lab8::Bootstrap::CreateLab());
        registry.Register(Lab9::Bootstrap::CreateLab());
    }
}