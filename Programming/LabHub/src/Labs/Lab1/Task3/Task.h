#pragma once

#include "Labs/Abstractions/ITask.h"

namespace Labs::Lab1::Task3
{
    class Task3 : public ITask
    {
        public:
            void Execute() override;

        private:
            UI _ui;
    };
}