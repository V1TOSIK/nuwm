#pragma once
#include "Labs/Abstractions/ITask.h"

namespace Lab8Tasks
{
    class Task1 : public ITask
    {
        public:
            void Execute() override;

        virtual ~Task1() = default;
    };
}
