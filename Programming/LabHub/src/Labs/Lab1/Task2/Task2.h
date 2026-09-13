#pragma once
#include "Labs/Abstractions/ITask.h"

namespace Lab1Tasks
{
    class Task2 : public ITask
    {
        public:
            void Execute() override;
        
        virtual ~Task2() = default;

        private:
            bool Calculate(float x, float c);
    };
}
