#pragma once

#include "Labs/Abstractions/ITask.h"
#include "Labs/Lab8/Task3/UI/UI.h"
#include "Labs/Lab8/Task3/Logic/Logic.h"
#include <string>

namespace Labs::Lab8::Task3
{
    class Task : public ITask
    {
        public:
            void Execute() override;
            short Number() const override;
            std::string Description() const override;

        private:
            UI _ui;
            Logic _logic;
    };
}
