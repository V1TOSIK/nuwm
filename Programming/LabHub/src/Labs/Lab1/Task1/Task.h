#pragma once

#include "Labs/Abstractions/ITask.h"
#include "Labs/Lab1/Task1/UI/UI.h"
#include "Labs/Lab1/Task1/Logic/Logic.h"

namespace Labs::Lab1::Task1
{
    class Task1 : public ITask
    {
        public:
            void Execute() override;

        private:
            UI _ui;
            Logic _logic;
    };
}