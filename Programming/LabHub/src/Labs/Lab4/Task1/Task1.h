#pragma once
#include "Labs/Abstractions/ITask.h"

namespace Lab4Tasks
{
    class Task1 : public ITask
    {
        public:
            void Execute() override;

        virtual ~Task1() = default;

        private:
            float CalculateFunction(float x);
            void PrintRow(int index, float x, float y);
    };
}
