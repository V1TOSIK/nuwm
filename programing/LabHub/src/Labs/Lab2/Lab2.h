#pragma once
#include "Labs/Abstractions/ILab.h"

namespace Labs
{
    class Lab2 : public ILab
    {
        public:
            void Run() override;
    
        virtual ~Lab2() = default;
    };
}
