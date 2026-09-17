#pragma once
#include "Labs/Abstractions/ITask.h"

namespace Lab7Tasks
{
    class Task4 : public ITask
    {
        public:
            void Execute() override;

        virtual ~Task4() = default;
    };
}
