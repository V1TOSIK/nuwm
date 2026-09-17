#pragma once
#include "Labs/Abstractions/ITask.h"

namespace Lab5Tasks
{
    class Task1 : public ITask
    {
        public:
            void Execute() override;

        virtual ~Task1() = default;

        private:
            double CalculateSum(int start, int end);
            double CalculateProduct(int start, int end);
    };
}
