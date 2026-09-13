#pragma once
#include "Labs/Abstractions/ITask.h"

namespace Lab2Tasks
{
    class Task2 : public ITask
    {
        public:
            void Execute() override;
        
        virtual ~Task2() = default;

        private:
            void Calculate(float a, float b, float c);
    };
}