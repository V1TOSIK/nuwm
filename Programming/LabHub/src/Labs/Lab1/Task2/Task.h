#pragma once

#include "Labs/Abstractions/ITask.h"

namespace Labs::Lab1::Task2
{
    class Task2 : public ITask
    {
        public:
            void Execute() override;

        private:
            UI _ui;
            Logic _logic;
    };
}