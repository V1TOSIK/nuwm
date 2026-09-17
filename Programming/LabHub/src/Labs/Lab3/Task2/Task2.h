#pragma once
#include "Labs/Abstractions/ITask.h"

namespace Lab3Tasks
{
    class Task2 : public ITask
    {
        public:
            void Execute() override;

        virtual ~Task2() = default;
    };
}
