#pragma once
#include "Labs/Abstractions/ITask.h"

namespace Lab2Tasks
{
    class Task1 : public ITask
    {
        public:
            void Execute() override;

        virtual ~Task1() = default;
        
        private:
            float CalculateX(float a, float b);
            float CalculateY(float a, float b);
            float CalculateZ(float x, float y);
    };
}
