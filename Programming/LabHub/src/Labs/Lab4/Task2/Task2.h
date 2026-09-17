#pragma once
#include "Labs/Abstractions/ITask.h"

namespace Lab4Tasks
{
    class Task2 : public ITask
    {
        public:
            void Execute() override;

        virtual ~Task2() = default;

        private:
            float CalculateFunction(float z);
    };
}
