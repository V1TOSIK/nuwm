#pragma once
#include "Labs/Abstractions/ITask.h"

namespace Lab1Tasks
{
    class Task1 : public ITask
    {
        public:
            void Execute() override;
        
        virtual ~Task1() = default;

        private:
            float CalculateR(float x, float k);
    };
}