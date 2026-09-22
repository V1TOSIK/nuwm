#pragma once

#include "Labs/Abstractions/ITask.h"

namespace Labs::Lab1::Task4
{
    class Task4 : public ITask
    {
        public:
            void Execute() override;

        private:
            UI _ui;
    };
}