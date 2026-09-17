#pragma once
#include "Labs/Abstractions/ITask.h"

namespace Lab4Tasks
{
    class Task3 : public ITask
    {
        public:
            void Execute() override;

        virtual ~Task3() = default;
    };
}
