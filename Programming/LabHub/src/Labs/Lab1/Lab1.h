#pragma once
#include "Labs/Abstractions/ILab.h"

namespace Labs
{
    class Lab1 : public ILab
    {
        public:
            void Run() override;
    
        virtual ~Lab1() = default;
    };
}
